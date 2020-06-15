#include<stdio.h>

#define SIZE 100
#define OUT 0
#define IN 1

void print_string(char *s){
	int i = 0;
	while(s[i] != '\0'){
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
}

void input_string(char *str){
	scanf("%[^\n]%*c", str);
}

int size(char *str){
	int length = 0;
	while(*str){
		length += 1;
		str++;
	}

	return length;
}

int count_words(char *str){
	int state = OUT;
	int count = 0;
	while(*str){
		if(*str == ' ' || *str == '\t' || *str == '\n'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			count ++;
		}
		str++;
	}
	return count;
}

int main(){
	char str[SIZE];

	input_string(str);

	print_string(str);
	
	int word_count = count_words(str);

	if(word_count == 0){
		printf("The given string is empty\n");
	}
	else{
		if(word_count == 1){
			printf("There is only %d word in the given string.\n", word_count);
		}
		else{
			printf("There are %d words in the given string.\n", word_count);
		}
	}

	return 0;
}