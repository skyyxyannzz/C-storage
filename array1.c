#include <stdio.h>
#include <string.h>

int cariangka(int array[], int length, int nilai){
    for(int i = 0; i < length; i++){
        if(array[i] == nilai){
            return i;
        }
    }
    return -1;
}

int main(){
    int nominal, i, total = 0, terbesar = 0, genap = 0, ganjil = 0, terkecil = 1000;
    int array[7];
    int length = sizeof(array) / sizeof(array[0]);
    int nilai, target, posisi = -1;
    int n = 7;
    double rataRata;

    for(i = 0; i < length; i++){
        printf("masukkan data ke-%d: ", i + 1);
        scanf("%d", &nominal);
        array[i] = nominal;

        total += nominal;

        if(nominal > terbesar){
            terbesar = nominal;
        }

        if(nominal < terkecil){
            terkecil = nominal;
        }

        if(nominal % 2 == 0){
            genap++;
        } else {
            ganjil++;
        }
    }

    //tampilkan data
    for(i = 0; i < length; i++){
        printf("\ndata ke-%d adalah %d", i + 1, array[i]);
    }

    printf("\n\n");
    printf("setelah data dibalik:");

    for(i = 6; i >= 0; i--){
        printf("%d ", array[i]);
    }

    //bagian cariangka
    printf("\n\nmasukkan angka yang ingin dicari: ");
    scanf("%d", &nilai);

    int index = cariangka(array, length, nilai);

    if(index == -1){
        printf("nilai %d tidak ditemukan dalam array", nilai);
    } else {
        printf("nilai %d ditemukan dalam index %d", nilai, index);
    }
    
    printf("\n\nmasukkan data yang ingin anda hapus: ");
    scanf("%d", &target);

    for(int i = 0; i < length; i++){
        if(array[i] == target){
            posisi = i;
            break;
        }
    }

    if(posisi == -1){
        printf("angka %d tidak ada dalam array", target);
    } else {
        for(int i = posisi; i < n - 1; i++){
            array[i] = array[i + 1];
        }
        n--;
    }
    
    printf("\ndata akhir: ");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    rataRata = (double) total / length;

    printf("\n\n=====REKAP HASIL=====");
    printf("\ntotal nilai : %d", total);
    printf("\nnilai terbesar : %d", terbesar);
    printf("\nnilai terkecil : %d", terkecil);
    printf("\nnilai genap : %d", genap);
    printf("\nnilai ganjil : %d", ganjil);
    printf("\nnilai yang dihapus : %d", target);
    printf("\nnilai yang dicari : %d", nilai);
    printf("\nrata rata nilai : %.2f", rataRata);
    
    return 0;
}