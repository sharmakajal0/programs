/*Stack
Push: If top != Capacity, push operation is applicable.
Pop: If top != -1, pop operation is applicable.
Peek: return top.
*/

#include<stdio.h>

void printString(char *s){
    while(*s){
        printf("%c", *s);
        s++;
    }
    printf("\n");
}

void inputString(char *s){
    scanf("%[^\n]%*c", s);
}

int valid_parentheses(char *s){
    int top = -1;
    int i=0;
    char ch;
    char stack[100];
    while(s[i] != '\0'){
        ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            top++;
            // printf("top: %d\n", top);
            stack[top] = ch;
        }
        else if(ch == ')'){
            // printf("s top: %c\n", stack[top]);
            if(stack[top] == '('){
                // printf("Symbol popped: ", stack[top]);
                top--;
            }
            else{
                // printf("wrong_symbol");
                top--;
                break;
            }
        }
        else if(ch == ']'){
            // printf("s top: %c\n", stack[top]);
            if(stack[top] == '['){
                // printf("Symbol popped: ", stack[top]);
                top--;
            }
            else{
                // printf("wrong_symbol");
                top--;
                break;
            }
        }
        else if(ch == '}'){
            // printf("s top: %c\n", stack[top]);
            if(stack[top] == '{'){
                // printf("Symbol popped: ", stack[top]);
                top--;
            }
            else{
                // printf("wrong_symbol");
                top--;
                break;
            }
        }
        i++;
    }

    return top;

}

void check_top(int top){
    // printf("Top: %d", top);
    if(top == -1){
        printf("The braces are Valid.\n");
    }
    else{
        printf("The braces are invalid.\n");
    }
}

int main(){
    int top;
    char parentheses[100];
    
    for(int i=0;i<2;i++){
        inputString(parentheses);
        top = valid_parentheses(parentheses);
        check_top(top);
    }
    // printString(parentheses);
    

    return 0;
}