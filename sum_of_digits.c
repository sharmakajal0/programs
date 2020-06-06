#include<stdio.h>

void sum_digit(int n){
	int sum_of_digit = 0, remainder, originalNum;
	originalNum = n;
	while(n!=0){
		remainder = n % 10;
		sum_of_digit += remainder;
		n = n/10;
	}

	printf("Sum of digits in %d = %d\n", originalNum, sum_of_digit);
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	sum_digit(n);

	return 0;
}
