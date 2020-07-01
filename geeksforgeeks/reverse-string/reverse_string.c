#include<stdio.h>
#include<string.h>

#define MAX 1000
// #pragma GCC diagnostic ignored ""

int size(char *s){
    int length = 0;
    while(*s){
        length += 1;
        s++;
    }

    return length;
}

void printString(char *s){
    while(*s){
        printf("%c", *s);
        s++;
    }
    printf("\n");
}

void reverse_string(char *s, int size){
    int start = 0;
    int end = size - 1;
    int i = 0;
    char temp;

    while(start < end){
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main(){
    FILE *stdin;
    int T;
    // while(T != 0){
    
    char string[20][MAX];
    stdin = fopen("input/input.in", "r");
    
    scanf("%d", &T);
    if(stdin == NULL){
        perror("Error opening file");
        return -1;
    }

    for(int i=0;i<T;i++){
        fgets(string[i], MAX, stdin);
    }

    for(int i=0;i<T;i++){
        int length = size(string[i]);
        if(length == 0){
            printf("Given string is empty.\n");
        }
        else if(length != 0){
            reverse_string(string[i], length);
            printString(string[i]);
        }
    }

    fclose(stdin);
    
    return 0;
}