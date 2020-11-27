#include<stdio.h>

int main(){
	char string[] = "Working with strings is fun";
	int index, position;
	printf("Enter the values of number of index and position\n");
	scanf("%d %d", &index, &position);
	
	position = position - 1;
	int temp_position = position;
	if(index == 0){
		while(string[position] != '\0'){
			printf("%c", string[position]);
			position++;
		}
		printf("\n");
	}
	else{
		while(string[position] != string[temp_position + index]){
			printf("%c", string[position]);
			position++;
		}
		printf("\n");
	}

	return 0;
}
