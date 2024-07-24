#include<iostream>
using namespace std;
int main(){
	int n,sum=0,i=0;
	cout<<"enter the limit to be added:";
	cin>>n;
	do{
		sum+=i;
		i++;
	}
	while(i<=n);
	cout<<"sum of "<< n <<" natural numbers is: "<<sum<<endl;
	return 0;
	}
