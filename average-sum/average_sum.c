#include<stdio.h>

#define MAX_SIZE 6
#define MAX_MARKS 100

int main(){
	int marks[MAX_SIZE];
	int sum = 0;
	float sum1;
	float average;

	printf("Enter marks of all subjects:\n");
	for(int i=0;i<MAX_SIZE;i++){
		scanf("%d", &marks[i]);
	}

	for(int i=0;i<MAX_SIZE;i++){
		sum = sum + marks[i];
	}
	
	printf("sum of all numbers: %d\n", sum);
	
	sum1 = sum;

	average = sum1/MAX_SIZE;

	printf("Average of all marks of all students: %f\n", average);

	return 0;
}	
