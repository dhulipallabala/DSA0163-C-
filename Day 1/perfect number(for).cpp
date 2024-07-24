#include<iostream>
using namespace std;
int main(){
	int input,result=0;
	cout<<"enter the input number:";
	cin>>input;
	for(int i=1;i<input;i++){
		if(input%i==0){
		result+=i;
	}
	}
	if(result==input){
		cout<<"perfect number";
	}
	else{
		cout<<"Not a perfect number";
	}
	return 0;
}
