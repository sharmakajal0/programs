#include<stdio.h>

void reverse(int n){
	int reverse = 0, remainder;
	while(n != 0){
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n/10;
	}
	printf("After reverse: %d\n", reverse);
}

int main()
{
	int n;
	printf("Enter the number to be reversed.");
	scanf("%d",&n);
	printf("Before reverse: %d\n", n);
	reverse(n);

	return 0;
}
