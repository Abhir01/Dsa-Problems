#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int cnt = 0 , rev = 0 , d =0;
	while(n!=0){
		d=n%10;
		rev = rev*10+d;
		n=n/10;
	}
	cout<<rev;
	return 0;
}