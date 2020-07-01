#include<stdio.h>

#define TESTCASES 100
#define LENGTH 10000

void printString(char *s){
    while(*s){
        printf("%c", *s);
        s++;
    }
    printf("\n");
}

char lower_alpha(char a){
    int i;
    i = a;
    if(i >= 97 && i<= 122){
        i = i - 32;
    }

    a = i;
    return a;
}

int main()
{
    FILE *fp;
    char s[TESTCASES][LENGTH];
    int T;
    scanf("%d", &T);
    fp = fopen("input/input-1.in", "r");
    if(fp == NULL){
        perror("Error opening input file");
        return -1;
    }

    for(int i=0;i<T;i++){
        // if(fgets(s[i], LENGTH, fp) != NULL){
        //     printString(s[i]);
        // }
        printf("Loop run times: %d\n", i+1);
        fgets(s[i], LENGTH, fp);
        printString(s[i]);
    }

    fclose(fp);

    return 0;
}
