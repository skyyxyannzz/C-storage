#include <stdio.h>

int faktorial(int x){
    if(x <= 1){
        return x;
    }
    else {
        return x * faktorial(x-1);
    }
}

int main(){
    int nilai;
    printf("masukkan nilai: ");
    scanf("%d", &nilai);

    if(nilai == 0){
        printf("%d! = %d\n", nilai, 1);
    } else {
        printf("%d! = %d\n", nilai, faktorial(nilai));
        
        return 0;
    }
}