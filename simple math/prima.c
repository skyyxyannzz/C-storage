#include <stdio.h>

int main(void){
    int x, m, i;
    char pilihan;
    start :
    printf("Program Bilangan Prima\n\n");
    printf("masukkan angka: ");
    scanf("%d", &x);
    m = 0;

    for(i = 1; i <= x; i++){
        if(x % i == 0){
            m++;
        }
    }
    if(m == 2){
        printf("Angka %d adalah bilangan prima", x);
    } else {
        printf("Angka %d adalah BUKAN bilangan prima", x);
    }
    printf("\n\n\n");

    choice:
    printf("apakah anda ingin mengulang (y/n): ");
    scanf("%c", &pilihan);

    if(pilihan == 'y'){
        goto start;
    } 

    return 0;
}