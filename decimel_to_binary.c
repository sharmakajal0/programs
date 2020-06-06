#include<stdio.h>

void binary(int n){
	int binary[32];
	int remainder, originalValue, i = 0;
	originalValue = n;
	while(n != 0){
		remainder = n % 2;
		binary[i] = remainder;
		n /= 2;
		i++;
	}

	for(int j = i-1;j>=0;j--){
		printf("%d", binary[j]);
	}
	printf("\n");
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	binary(n);

	return 0;
}
