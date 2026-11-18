#include <stdio.h>

int main(void){
    int Sn, i, n;
    char pilihan;
    int S0 = 0, S1 = 1;

    start:
    printf("DERET FIBONACCI\n\nSuku ke-n: ");
    scanf("%d", &n);
    printf("%d\n", S1);
    for(i = 1; i <= n; i++){
        Sn = S1 + S0;
        printf("%d\n", Sn);
        S0 = S1;
        S1 = Sn;
    }

    printf("apakah anda ingin mengulang? (y/n): ");
    scanf("%c", &pilihan);

    if(pilihan == 'y'){
        goto start;
    }

    return 0;
}