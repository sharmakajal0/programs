#include<stdio.h>

#define MAX 100

void inputString(char *s){
    scanf("%[^\n]%*c", s);
}

void printString(char *s){
    while(*s){
        printf("%c", *s);
        s++;
    }
    printf("\n");
}

int string_to_int(char s[]){
    unsigned long int result = 0;
    int i = 0;
    while(*s){
        result = result * 10 + *s - '0';
        s++;
    }

    return result;
}

int main(){
    char string[MAX];
    int equivalent_integer_string;

    inputString(string);
    // printString(string);
    
    equivalent_integer_string = string_to_int(string);
    if(equivalent_integer_string == 0){
        printf("The given integer string is null.\n");
    } else {
        printf("%ld\n", equivalent_integer_string);
    }

    return 0;
}