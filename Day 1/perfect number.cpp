#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int input,sum=0,i;
	cout<<"enter the integer:"<<endl;
	cin>>input;
	if(input<1)
	{
	cout<<"//invalid input//";
	}
	else
	{
		for(i=1;i<input;++i){
			if(input%i==0){
			sum+=i;
	        	}
			}
		}
	if(sum==input){
		cout<<"perfect number";
	}
	else
	{
		cout<<"Not a perfect number";
	}
	return 0;
}
