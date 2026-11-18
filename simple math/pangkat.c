#include <stdio.h>

void judul();
int perpangkatan(int x, int y);

int main(void){
    int nilai, hasil, pangkat;

    judul();
    printf("masukkan nilai: ");
    scanf("%d", &nilai);

    printf("pangkat: ");
    scanf("%d", &pangkat);

    hasil = perpangkatan(nilai, pangkat);
    printf("hasilnya adalah: %d", hasil);

    return 0;
}

void judul(){
    printf("PROGRAM FUNGSI BERPANGKAT\n\n");
}

int perpangkatan(int x, int y){
    int i, a;
    a = x;
    for(i = a; i < y; i++){
        a *= x;
    }
    return a;
}