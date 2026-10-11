#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{
	int a = 10;
	short b = 20;

	int* p1 = &a;
	short* p2 = &b;

	printf("%d\n", *p1);
	printf("%d\n", *p2);

	void* p3 = p1;
	void* p4 = p2;

	return 0;
	

}

void swap(void* p1, void* p2, int len);
{
	char* pc1 = p1;
	char* pc2 = p2;

	char temp = 0;

	for(int i = 0;i < len;i++)
	{
		temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;

		*pc1++;
		*pc2++;
	}

}