#include<stdio.h>

int main(){
    int n;

    printf("Enter the value of n from 1 to 10000: ");
    scanf("%d", &n);

    while(n > 0){
        if(n >= 10000){
            printf("X-");
            n -= 10000;
        }
        else if(n >= 9000){
            printf("MX-");
            n -= 9000;
        }
        else if(n >= 5000){
            printf("V-");
            n -= 5000;
        }
        else if(n >= 4000){
            printf("MV-");
            n -= 4000;
        }
        else if(n >= 1000){
            printf("M");
            n -= 1000;
        }
        else if(n >= 900){
            printf("CM");
            n -= 900;
        }
        else if(n >= 500){
            printf("D");
            n -= 500;
        }
        else if(n >= 400){
            printf("CD");
            n -= 400;
        }
        else if(n >= 100){
            printf("C");
            n -= 100;
        }
        else if(n >= 90){
            printf("XC");
            n-= 90;
        }
        else if(n >= 50){
            printf("L");
            n -= 50;
        }
        else if(n >= 40){
            printf("XL");
            n -= 40;
        }
        else if(n >= 10){
            printf("X");
            n -= 10;
        }
        else if(n >= 9){
            printf("IX");
            n -= 9;
        }
        else if(n >= 5){
            printf("V");
            n -= 5;
        }
        else if(n >= 4){
            printf("IV");
            n -= 4;
        }
        else if(n >= 1){
            printf("I");
            n -= 1;
        }
    }
    printf("\n");

    return 0;
}