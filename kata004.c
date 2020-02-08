// given a positive integer n,find out the smallest
// integer m, such that the product of all digits of m is equal to n.
// for ex :
// n = 36  return m = 49
// n = 72  return m = 89

#include<stdio.h>
int main(){
	int m,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(int i = 1 ;i <= 10; i++){
		for(int j = 2; j<=10; j++){
			//printf("%d * %d = %d\n",i,j,i*j);
			while((i*j) == n ){
				printf("i=%d and j=%d\n",i,j);
				int m = i*10+j;
				if(m>100)printf("out of range\n");
				printf("m = %d\n",m);
				return 0;
			}
		}
//		printf(" \n");
	}
	return 0;
}
