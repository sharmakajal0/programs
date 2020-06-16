#include<stdio.h>

#define MAX 100
#define MAX_CHAR 123

int uppercase(char c){
    int i;
    i = c;
    if(i >= 97 && i<= 122){
        i = i - 32;
    }

    return i;
}

void printString(char *s){
    while(*s){
        printf("%c", *s);
        s++;
    }
    printf("\n");
}

void printArray(int arr[]){
    for(int i=97;i<123;i++){
        printf("value at %d: %d\n", i, arr[i]);
    }
}

int main(){
    char string[MAX];
    int frequency[MAX_CHAR];
    int ascii;

    scanf("%[^\n]%*c", string);

    for(int i=97;i<MAX_CHAR;i++){
        frequency[i] = 0;
    }

    int i=0;
    while(string[i] != '\0'){
        ascii = string[i];
        frequency[ascii] += 1;
        i++;
    }

    int non_repeating_count = 1;
    char non_repeating_characters[10];
    int index = 0;
    for(int i=97;i<MAX_CHAR;i++){
        if(frequency[i] == non_repeating_count){
            non_repeating_characters[index] = i;
            index++;
        }
    }

    printf("The first non repeating character: %c\n", non_repeating_characters[0]);
    printf("The second non repeating character: %c\n", non_repeating_characters[1]);

    // printString(value);

    // printf("min: %d\n", min);
    // printString(string);

    // printArray(frequency);
    return 0;
}