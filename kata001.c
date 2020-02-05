//WAP to take input any alphabet in order 1 to 26 like 1=a and z=26 repeatedly and aa=26+1,and zz=26+26


#include<stdio.h>
int main(){
	char any;
	int data;
	printf("Enter a alphabet\n");
	scanf("%c",&any);
	data=(int)(any);
	printf("%d\n",any-96);
	return 0;
}
