#include<stdio.h>

void showBits(unsigned int x){
    int k;
    int leftshift;
    for(int i=7;i>=0;i--){
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
    unsigned int j;
    printf("Enter the number for which binary value is to be obtained: ");
    scanf("%d", &j);
    // printf("Main Function:\n");
    showBits(j);


    return 0;
}