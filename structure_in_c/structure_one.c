#include<stdio.h>

void display(char *s, char *t, int c);

struct book
{
	char name[25];
	char author[25];
	int callno;
};

int main()
{
//	struct book
//	{
//		char name[25];
//		char author[25];
//		int callno;
//	};
	
	struct book b1 = {"Let us C", "YPK", 101};
//	scanf("%[^\n]%*c", &b1.name);
//	scanf("%[^\n]%*c", &b1.author);
//	scanf("%d", &b1.callno);

	display(b1.name, b1.author, b1.callno);

	return 0;
}

void display(char *s, char *t, int c){
	printf("Book name: %s\nAuthor's name: %s\ncontact number of author: %d\n", s, t, c);
}
