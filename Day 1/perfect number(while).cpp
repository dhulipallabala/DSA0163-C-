#include<iostream>
using namespace std;
int main(){
	int input,result=0,i;
	cout<<"enter the input number:";
	cin>>input;
	
	while(i<input){
		if(input%i==0){
		result+=i;
	}
	i++;
	}
	if(result==input){
		cout<<"perfect number";
	}
	else{
		cout<<"Not a perfect number";
	}
	return 0;
}
