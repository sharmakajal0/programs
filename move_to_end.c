#include<stdio.h>

#define MAX 10

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void inputArray(int arr[], int n){
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
}

void sort(int arr[], int n){
	int key, j;
	for(int i=1;i<n;i++){
		key = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void reverse(int arr[], int n){
	int start = 0, end = n - 1;
	int temp;
	while (start < end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main(){
	int n;
	int arr[MAX];

	printf("Enter the element num of array: ");
	scanf("%d", &n);

	printf("\nEnter the elements of aaray\n");
	inputArray(arr, n);
	
	printArray(arr, n);
	sort(arr, n);
	printArray(arr, n);
	reverse(arr, n);
	printArray(arr, n);

}

