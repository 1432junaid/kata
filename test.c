#include<stdio.h>
int sum_of_string(* char,int);
int main(){
	char c[5];
	int len = sizeof(c)/sizeof(c[0]);
	printf("enter string");
	for(int i =0;i<len; i++){
		scanf("%d",c[i]);
	}
	int result = sum_of_string(c);
	return 0;
}

int sum_of_string(char *c,int len){
	while(len){
		int data =(char)(c[i]);
		data -= 96
		c[i] = 
		len--;
	}
