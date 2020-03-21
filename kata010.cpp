#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<int> >a;
	int x,element,len;
	cout<<"Enter the length of array : "<<endl;
	cin>>x;
	for(int i=0;i<x;i++){
		cout<<"enter the lenght of array of array";
		cin>>len;
		vector<int> v1;
		for(int j=0;j<len;j++){
			cin>>v1.push_back(element)>>endl;
		}
		a.push_back(v1);
	vector<int>::iterator itr1 =v1.begin();
	vector<int>::iterator itr2 =v1.end();
	v1.erase(itr1,itr2);
	}
	cout<<"----------------------------------"<<endl<<endl;
	cout<<"enter the query"<<endl;
	cout<<"enter the index of array"<<endl;
	int a1,b1;
	cin>>a1;
	cout<<"enter the index of array of array"<<endl;
	cin>>b1;
	for(int k=0; k<x;k++){
		vector<int>x = a[a1];
		cout<<x[b1]<<endl;
	}
	return 0;
}
