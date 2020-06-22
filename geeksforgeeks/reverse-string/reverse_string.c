#include<stdio.h>

#define MAX 1000

void inputString(char *s){
    scanf("%[^\n]%*c", s);
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
    printf("T : %d\n", T);
    // while(T != 0){

    for(int i=0;i<T;i++){
        char string[MAX];
        scanf("%*c%[^\n]", string);
        int length = size(string);

        reverse_string(string, length);
        printString(string);
    }
    
    return 0;
}