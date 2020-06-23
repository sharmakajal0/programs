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

int size(char *s){
    int length = 0;
    while(*s){
        length += 1;
        s++;
    }

    return length;
}

void reverse_words(char *s, int size){
    int i=0;
    int start = 0, end = 0;
    while(s[i] != '\0'){
        int temp;
        char temp_var;
        if(s[i] != ' '){
            end++;
        }
        if(s[i] == ' ' || end == size){
            temp = end;
            while(start < end){
                temp_var = s[start];
                s[start] = s[end-1];
                s[end-1] = temp_var;
                start++;
                end--;
            }
            start = temp + 1;
            end = temp + 1;
        }
        i++;
    }
}

void reverse_string(char *s, int length){
    int start = 0, i = 0;
    int end = length - 1;
    char temp;
    while(s[i] != '\0'){
        while(start<end){
            temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        i++;
    }
}

int main(){
    char test_string[MAX];

    inputString(test_string);
    int length = size(test_string);
    // printf("Length: %d\n", length);
    if(length == 0){
        printf("The given string is empty.\n");
    }
    else {
        if(test_string[length-1] == '.'){
            // printf("Length: %d\n", length);
            printf("String before reversing of words: ");
            printString(test_string);
            
            reverse_words(test_string, length - 1);
            reverse_string(test_string, length - 1);
            
            printf("String after reversing of words: ");
            printString(test_string);
        }
        else{
            // printf("Length: %d\n", length);
            printf("String before reversing of words: ");
            printString(test_string);
            
            reverse_words(test_string, length);
            reverse_string(test_string, length);
            
            printf("String after reversing of words: ");
            printString(test_string);
        }
    }

    return 0;
}