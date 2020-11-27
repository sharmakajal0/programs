#include<stdio.h>
#include<math.h>

int power(int a, int b){
	int result;

	if(b == 0){
		result = 1;
	}
	else{
		result = 1;
		while(b >= 1){
			result = result * a;
			b--;
		}
	}

	return result;
}

int main(){
	int base, exponent;
	int value;
	printf("Enter the value of base\n");
	scanf("%d", &base);

	printf("Enter the value of power\n");
	scanf("%d", &exponent);

	for(int i=0;i<exponent;i++){
		value = power(base, i);
		for(int space= 1; space < exponent - i; ++space){
				printf("  ");
		}
		int d;
		while (value != 0){
			d = value % 10;
			printf("  %d ", d);
			value = value/10;
		}
		printf("\n");
	}

	return 0;	
}
