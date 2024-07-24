#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter the limit to be added:";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	cout<<"sum of "<< n <<" natural numbers is: "<<sum<<endl;
	return 0;
	}
