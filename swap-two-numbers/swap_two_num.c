#include<stdio.h>

void swap(int a, int c){
	a = a + c;
	c = a - c;
	a = a - c;
}

int main()
{
	int num_one, num_two;
	printf("Enter num to swap: ");
	scanf("%d %d", &num_one, &num_two);
	printf("Not Swapped: num_one = %d, num_two = %d\n", &num_one, &num_two);
	swap(num_one, num_two);
	printf("Swapped: num_one = %d, num_two = %d\n", &num_one, &num_two);

	return 0;
}
