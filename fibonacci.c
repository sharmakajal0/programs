#include<stdio.h>

int main(){
	int i, n, t1=0, t2=1, next;
	printf("Enter a number upto which the series is to be calculated.");
	scanf("%d", &n);
	printf("Fibonacci Sequence: ");
	for(int i=0;i<=n;i++){
		printf("%d ", t1);
		next = t1 + t2;
		t1 = t2;
		t2 = next;
	}
	printf("\n");

	return 0;
}
