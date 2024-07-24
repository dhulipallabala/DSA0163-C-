#include<iostream>
using namespace std;
int main(){
	int n,sum=0,i=0;
	cout<<"enter the limit to be added:";
	cin>>n;
	while(i<=n){
		sum+=i;
		i++;
	}
	cout<<"sum of "<< n <<" natural numbers is: "<<sum<<endl;
	return 0;
	}
