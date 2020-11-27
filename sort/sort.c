#include<stdio.h>

#define MAX_SIZE 6

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void selection_sort(int arr[], int n){
	int min_index;
	int j;
	for(int i=0;i<=n-1;i++){
		min_index = i;
		j = i + 1;
		for(;j<n;j++){
			if(arr[j] > arr[min_index]){
				min_index = j;
			}
			swap(&arr[min_index], &arr[j]);
		}
	}
}


int main(){
	int arr[MAX_SIZE];
		
	printf("Enter elements of Array");

	for(int i=0;i<MAX_SIZE;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Befor sort");
	printArray(arr, MAX_SIZE);

	selection_sort(arr, MAX_SIZE);

	printf("After Sort");
	printArray(arr, MAX_SIZE);

	return 0;
}
