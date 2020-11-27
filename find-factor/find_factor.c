#include<stdio.h>

// void find_factor(int n);

// int check_prime(int n);
/*
void find_factor(int n){
	int p;
	for(int i=2;i=n/2;i++){
		if(n % i == 0){
			p = check_prime(i);
			if(p == 1){
				printf("%d, ", i);
			}
		}
	}
	printf("\n");
}
*/

void check_prime(int n){
	int i = 2;
	int  flag = 0;
	while(i < n/2){
		if(n % i == 0){
			flag = 1;
		}
	}
	return flag; 
}

int main(){
	int n;
	scanf("%d", &n);
	check_prime(n);

	return 0;
}
