#include<stdio.h>

int main()
{
	int num, reverseNum=0, originalNum, remains;
	printf("Enter the num: ");
	scanf("%d", &num);
	originalNum = num;
	while(num != 0){
		remains = num % 10;
		reverseNum = reverseNum*10 + remains;
		num = num / 10;
	}
	printf("original = %d, reversed =  %d\n", originalNum, reverseNum);
	if(reverseNum == originalNum){
		printf("%d is a palindrome.\n", originalNum);
	} else{
		printf("%d is not a palindrome.\n", originalNum);
	}

	return 0;
}
