#include<stdio.h>

int factorial(int n){
	int value = 1;
	for(int i=1;i<=n;i++){
        value = value * i;
	}
	return value;
}

int main()
{
	int n, factor;
	printf("Enter a number whose factorial is to be calculated.");
	scanf("%d", &n);
	value = factorial(n);
	printf("%d", value);

	return 0;
}
