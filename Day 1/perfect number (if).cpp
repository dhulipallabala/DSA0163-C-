#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int input,result,sum=0,i;
	cout<<"enter the integer:"<<endl;
	cin>>input;
	if(input>0){
		i=1;
	 while(i<input){
	 	if(input%i==0){
	 		sum+=i;
		 }
		 i++;
	 }
	 if(sum==input){
	 	cout<<"perfect number";
	 }
	 else{
	 	cout<<"not a perfect number";
	 }
	}
	else{
		cout<<"//Invalid input";
	}
	return 0;
}

