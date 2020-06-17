#include<stdio.h>

void showBits(unsigned int x){
    int k;
    int leftshift;
    for(int i=15;i>=0;i--){
        leftshift = 1<<i;
        k = x & leftshift;
        if(k==0){
            printf("0");
        } else {
            printf("1");
        }
    }
    printf("\n");
}

int main(){
    unsigned int j = 0;
    // printf("Main Function:\n");
    for(;j<=20;j++){
        // printf("Inside for loop\n");
        printf("The binary value of integer %d is: ", j);
        showBits(j);
    }


    return 0;
}