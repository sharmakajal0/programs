#include<stdio.h>

int main(){
	int test[5];
	printf("Enter Array elements: ");
	for(int i=0;i<5;i++){
		scanf("%d",&test[i]);
	}

	printf("\nDisplaying elemnts: \n");
	for(int j=0;j<5;j++){
		printf("%d\n", test[j]);
	}

	return 0;
}
