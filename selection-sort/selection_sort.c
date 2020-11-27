#include<stdio.h>

#define MAX_SIZE 6

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print(int i){
	if(i == 1)
		printf("%dst sort\n", i);
	else if(i == 2)
		printf("%dnd sort\n", i);	
	else if(i == 3)
		printf("%drd sort\n", i);
	else
		printf("%dth sort\n", i);
}

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[MAX_SIZE];
	for(int i=0;i<MAX_SIZE;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Before Sort: \n");
	printArray(arr, MAX_SIZE);

	printf("\n");
	int i=0, j;
	int min;
	int count = 0;
	for(;i<MAX_SIZE-1;i++){
		min = i;
		j = i+1;
		while(j < MAX_SIZE){
			if(arr[j] < arr[min]){
				min = j;
			}
			j++;
		}
		if(min != i){
			count += 1;
			swap(&arr[min], &arr[i]);
			//print(count);
			//printArray(arr, MAX_SIZE);
			//printf("\n");

		}
	}

	printf("After Sort: \n");
	printArray(arr, MAX_SIZE);

	return 0;
}
