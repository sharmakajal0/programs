#include<stdio.h>

int recur_sum(int n){
	int total;
	if(n == 0){
		return 0;
	}

	return (n%10 + recur_sum(n/10));
}
int main(){
	int n;
	int sum;
	scanf("%d", &n);
	
	sum = recur_sum(n);
	
	printf("sum of digits: %d\n", sum);

	return 0;
}
