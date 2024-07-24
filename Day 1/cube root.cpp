#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double input,result;
	cout<<"enter the integer:"<<endl;
	cin>>input;
	if(cin.fail())
	{
		cout<<"//invalid input//";
	}
	else{
			result=cbrt(input);
		cout<<"cube root of "<< input <<" = "<<result;
	}
	
	return 0;
}
