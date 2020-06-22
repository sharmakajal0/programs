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
    int i = 0;
    char string[100][MAX];
    for(int i=0;i<T;i++){
        scanf("%[^\n]%*c", *string[i]);
    }

    for(int i=0;i<T;i++){
        printString(*string[i]);
        int length = size(*string[i]);

        reverse_string(*string[i], length);
        printString(*string[i]);
    }
    
    return 0;
}