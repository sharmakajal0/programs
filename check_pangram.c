#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX_SIZE 200
#define MAX_CHARS 255

void inputString(char *str){
	scanf("%[^\n]%c", str);
}

void printArray(int arr[], int n){
	for(int i = 0;i<n;i++){
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
	char c;
	while(test_str[i] != '\0'){
		c = tolower(test_str[i]);
		ascii = (int)c;
		frequency[ascii] += 1;
		i++;
	}
	
//	printArray(frequency, MAX_CHARS);

	for(int j=0;j<MAX_CHARS;j++){
		if(frequency[j] > 0){
			count++;
		}
	}
	//Removing the whitespace character
//	count = count - 1;

	printf("Count = %d\n", count);
	
	if(count == 26 || count == 27){
		printf("The given string is pangram\n");
	} else {
		printf("The given string is not a pangram\n");
	}

	return 0;
}
