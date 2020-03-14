//WAP to take input any alphabet in order 1 to 26 like 1=a and z=26 repeatedly and aa=26+1,and zz=26+26
//may be there is mistake in programe assume a=1 and z=26 then aa=1+1 and zz = 26+26

#include<stdio.h>
void count();
int main(){
	printf("enter character\n");
	count();
//	printf("data = %d \n",result);

	return 0;
}

void count(){
	char c;
	int data;
	int value = 0 ;
	scanf("%c",&c);
	if(c != '\n'){
		data = (int)(c);
		data -= 96;
//		data += data;
		value += data;
		printf("%d\n",data);
		count();
	}
	printf("value =%d\n",value);
//	return value;
}
