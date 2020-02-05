//find longest sub-sequence

#include<iostream>
using namespace std;
int small(int*,int);
void asc(int *,int);
int main(){
	int a[] = {1,7,9,15,2,4,8,16,3,17};
	int len = sizeof(a)/sizeof(a[0]);
	int s = 0;
	int count;
//	int temp =0;
//	int *s_p;
//	int *e_p;
	cout<<len<<endl;
/*
	for(int i=0;i<len; i++){
		for(int j=0;j<len;j++){
			if(a[i] < a[j])temp = a[i];
		}
	}
	cout<<temp<<endl;
	s = small(a,len);
*/
	asc(a,len);
	int temp = a[s];
	for(int i=0;i<len;i++){
		if(temp == a[i]){
			count++;
			temp++;
		}
//		cout<<a[i]<<endl;
	}
	cout<<count<<endl;
	return 0;
}
/*

int find_small(int a){
	int temp;
	int len = sizeof(a)/sizeof(int);
	for(int i=0;i<len;i++){
		for(int k=0;k<len;k++){
			if(a[i] < a[j] temp = a[i];
		}
	}
	return temp;
}


*/
/*
int small(int *a,int len){
        int i,j,min;
        for(i=0;i<len-1;i++){
                min=i;
                for(j=i+1;j<len;j++){
                        if(a[j]<a[min]){
                                min=j;
                        }
                }
                int temp=a[i];
                a[i]=a[min];
                a[min]=temp;
        }
	min = a[min];
	return min;
}
*/

void asc(int *a,int len){
        int i,j,min;
        for(i=0;i<len-1;i++){
                min=i;
                for(j=i+1;j<len;j++){
                        if(a[j]<a[min]){
                                min=j;
                        }
                }
                int temp=a[i];
                a[i]=a[min];
                a[min]=temp;
        }
}

