#include<stdio.h>

void reverse_array(int arr[], int start, int end){
	int temp;
	while(start<end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void print_array(int arr[], int size){
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr);
	/*
	printf("Enter the values of array: ");
	for(int i=0;i<n;i++){
		scanf("%d", arr[i]);
	}
	*/
	print_array(arr, n);
	reverse_array(arr, 0, n-1);
	print_array(arr, n);

	return 0;
}
