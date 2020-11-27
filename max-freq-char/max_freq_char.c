#include<stdio.h>
#include<string.h>

#define MAX_SIZE 100
#define MAX_CHARS 255

int main(){
	char test_str[MAX_SIZE];
	int frequency[MAX_CHARS];
	int i=0, max;
	int ascii;

	scanf("%[^\n]%*c", test_str);

	for(int i = 0;i<MAX_CHARS;i++){
		frequency[i] = 0;
	}

	i = 0;
	while(test_str[i] != '\0'){
		ascii = (int)test_str[i];
		frequency[ascii] += 1;
		i++;
	}

	max = 0;

	for(int i=0;i<MAX_CHARS;i++){
		if(frequency[i] > frequency[max]){
			max = i;
		}
	}

	printf("%c=%d\n", max, frequency[max]);

	return 0;
}
