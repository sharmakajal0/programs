#include<stdio.h>

void check_prime(int n){
	int flag=0;
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			flag = 1;
			break;
		}
	}

	if (flag == 0){
		printf("The given number %d is prime\n", n);
	} else {
		printf("The given number %d is not prime\n", n);
	}
}

int main(){
	int n;
	printf("Enter a number ");
	scanf("%d", &n);
	check_prime(n);

	return 0;
}
