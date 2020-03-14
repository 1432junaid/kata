//count the number of one to make continous 1's
// for ex = 00010110010000 we want to get the output 3 make the number 

#include<stdio.h>
int counter2(unsigned int);
char counter1(char*,int);
int main(){
//	unsigned int x=1424;
	char num[] = "00010110010000";
//	int result = counter2(x);
	int len = sizeof(num)/sizeof(num[0]);
	printf("len = %d\n",len);
	int result = counter1(num,len);
	printf("result =%d\n",result);
	return 0;
}

char counter1(char *x,int len){
	int count =0;
/*
	for(int i=0 ; i<len-1 ;i++){
		//	printf("%d\t",x[i]);
		for(int j=len-1; j<=i;j--){
		//	printf("%d\t",x[j]);
			if(x[i] == 1 && x[j] == 1){
				while(x[i] <= x[j]){
					if(x[i] == 0)count ++;
					i++;
				}
			}
		}

	}

//	int i=1;
//	int j=len-1;
//	while(x){
//		if(x[i] == 1){
//			while(j){
//				if(x[j] == 1)

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
