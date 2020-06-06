#include<stdio.h>

void printArray(int *arr, int n){
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}

void inputArray(int *arr, int n){
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
}

int main(){
	int *arr;
	int n;
	int A[n], B[n], C[n];
	int non_zero = 0, zero = 0; 
	int index = 0;

	printf("Enter the element num of array: ");
	scanf("%d", &n);

	// inputArray(arr, n);
	printf("\nEnter the elements of aaray\n");
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printArray(arr, n);

	for(int i=0;i<n;i++){
		if(arr[i] != 0){
			B[non_zero] = arr[i];
			non_zero++;
		} else {
			C[zero] = arr[i];
			zero++;
		}
	}

	for(int i=0;i<non_zero;i++){
		A[index] = B[i];
		index++;
	}

	for(int i=0;i<zero;i++){
		A[index] = C[i];
		index++;
	}

	printArray(A, index);
}

