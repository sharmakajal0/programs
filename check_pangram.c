#include<stdio.h>

#define MAX_SIZE 100
#define MAX_CHARS 91

void inputString(char *str){
	scanf("%[^\n]%c", str);
}

void printArray(int arr[]){
	for(int i = 65;i<=90;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	char test_str[MAX_SIZE];
	int frequency[MAX_CHARS];
	int i=0;
	int ascii;
	int count = 0;

	inputString(test_str);

	for(i=0;i<MAX_CHARS;i++){
		frequency[i] = 0;
	}
	i=0;

	while(test_str[i] != '\0'){
		if(test_str[i] >= 'a' && test_str[i] <= 'z'){
			test_str[i] = test_str[i] - 32;
		}
		ascii = test_str[i];
		frequency[ascii] += 1;
		i++;
	}
	
	printArray(frequency);

	for(int j=65;j<=90;j++){
		if(frequency[j] > 0){
			count++;
		}
	}
	//Removing the whitespace character
//	count = count - 1;

	printf("Count = %d\n", count);
	
	if(count == 26){
		printf("The given string is pangram\n");
	} else {
		printf("The given string is not a pangram\n");
	}

	return 0;
}
