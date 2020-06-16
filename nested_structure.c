#include<stdio.h>

int main(){
	struct address
	{	char phone[15];
		char city[25];
		int pincode;
	};
	struct emp 
	{
		char name[25];
		struct address a;
	};
	
	struct emp e ={"Jerry", "981023", "Nagpur", 101};

	printf("name=%s, phone=%s, city=%s, pincode=%d\n", e.name, e.a.phone, e.a.city, e.a.pincode);

	return 0;
}

