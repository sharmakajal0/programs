#include<stdio.h>

#define MAX_SIZE 100
#define MAX_CHARS 91

void initialize(int frequency[]){
	for(int i=65;i<=90;i++){
		frequency[i] = 0;
	}
}

void countString(char *str, int frequency[]){
	int i = 0;int ascii;
	while(str[i] != '\0'){
		if(str[i] >= 97){
			str[i] = str[i] - 32;
		}
		ascii = str[i];
		frequency[ascii] += 1;
		i++;
	}
}

void inputString(char *str){
	scanf("%[^\n]%*c", str);
}

int compare(int freq1[], int freq2[]){
	int flag;
	for(int i=65;i<=90;i++){
		if(freq1[i] != freq2[i]){
			flag = 0;
		}
		else{
			flag = 1;
		}
	}
	return flag;
}

int numChar(char *str){
	int i=0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

int main(){
	char str1[MAX_SIZE];
	char str2[MAX_SIZE];
	int freq1[MAX_CHARS];
	int freq2[MAX_CHARS];
	int flag;

	inputString(str1);
	inputString(str2);

	int count1, count2;

	count1 = numChar(str1);
	count2 = numChar(str2);

	if(count1 != count2){
		printf("The given string are not angrams\n");
	} else {

		initialize(freq1);
		initialize(freq2);

		countString(str1, freq1);
		countString(str2, freq2);

		flag = compare(freq1, freq2);

		if (flag == 1){
			printf("The given strings are anagrams\n");
		} else {
			printf("The given strings are not anagrams\n");
		}
	}

	return 0;
}
