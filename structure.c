#include<stdio.h>

#define MAX_SIZE 5

int main(){
	struct book
	{
		char name;
		float price;
		int pages;
	};

	struct book b[MAX_SIZE];
	for(int i=0;i<MAX_SIZE;i++){
		printf("\nEnter name, number of pages and price of book %d: ", i+1);
		scanf("%c", &b[i].name);
		scanf("%d", &b[i].pages);
		scanf("%f", &b[i].price);
	}
	printf("\n");
	for(int i=0;i<MAX_SIZE;i++){
	 	printf("name and number of pages and price of book %d: ", i+1);
	 	printf("%c\t%d\t%f\n", b[i].name, b[i].pages, b[i].price);
	}

	return 0;
}
