#include<stdio.h>
#include<string.h>

#define MAX 1000

void inputString(char *s){
    gets(s);
}

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
    int T;
    scanf("%d", &T);
    // while(T != 0){
    char string[20][20];

    for(int i=0;i<T;i++){
        gets(string[i]);
        int length = size(string[i]);

        reverse_string(string[i], length);
        puts(string[i]);
    }
    
    return 0;
}