#include<stdio.h>

void factorial(int n){
	int value = 1;
	for(int i=1;i<=n;i++){
        value = value * i;
	}
	printf("factorial of %d is %d\n", n, value);
}

int main()
{
	int n, factor;
	printf("Enter a number whose factorial is to be calculated.");
	scanf("%d", &n);
	factorial(n);

	return 0;
}
