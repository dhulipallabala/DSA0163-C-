#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double input,result;
	cout<<"enter the integer:"<<endl;
	cin>>input;
	if(input>=1)
	{
		result=sqrt(input);
		cout<<"square root of "<< input <<" = "<<result;
	}
	else
	cout<<"//invalid input//";
	return 0;
}
