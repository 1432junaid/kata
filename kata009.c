//count the number of one to make continous 1's
// for ex = 00010110010000 we want to get the output 3 make the number

#include<stdio.h>
#include<string.h>
//int counter2(unsigned int);
int  counter1(char*);
int main(){
//	unsigned int x=1424;
	char num[] = "00010110010000";
//	int result = counter2(x);
//	int len = sizeof(num)/sizeof(num[0]);
//	printf("len = %d\n",len);
	int result = counter1(num);
	printf("result =%d\n",result);
	return 0;
}

int counter1(char *x){
	int count =0;
	int len = strlen(x);
	int i =0;
	int j = len -1;
	printf("len =%d\n",len);
	while(x[i] !='1')i++;
	while(x[j] !='1')j--;
	while(i<j){
		if(x[i] == '0')count ++;
		i++;
	}
	return count;
}



/*
int counter2(unsigned int x){
	int count = 0;
	while((x&1) == 0){
		x = x >> 1;
	}
	while(x){
		if((x&1) == 0) count ++;
		x = x>>1;
	}
	return count;
}

*/
