#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter the age:";
	cin>>age;
	if(age>=18)
	cout<<"you are eligible to vote";
	else
	cout<<"your are "<<18-age<<" years left to vote";
	return 0;
}
