//WAP to take input any alphabet in order 1 to 26 like 1=a and z=26 repeatedly and aa=26+1,and zz=26+26
//may be there is mistake in programe assume a=1 and z=26 then aa=1+1 and zz = 26+26

#include<stdio.h>
int count();
int main(){
///	char any;
	int ans =0;
	int result = count();
	int count(){
//		printf("Enter a alphabet\n");
		int any
		scanf("%c",&any);
		if(any != '\n'){
			int data=(int)(any);
			printf("%d\n",any-96);
			ans += any-96;
		}
		return 0;
}
