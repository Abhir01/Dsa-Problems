#include<bits/stdc++.h>
using namespace std;


//O(2N)
// int fib(int n){
// 	if(n<=1){return n;}
// 	return fib(n-1)+fib(n-2);
// }

// int main(){
// 	vector<int>ans;
// 	int n;cin>>n;
	
// 	//fib(n)for every number
// 	for(int i = 0 ; i < n;i++){
// 		ans.push_back(fib(i));
// 	}
	
// 	//print array
// 	for(int i = 0 ; i < ans.size() ;i++){
// 		cout<<ans[i]<<" ";
// 	}
// return 0;	
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
	int a = 0;
	int b = 1;
	int c = 0;
	cout<<a<<" ";
	cout<<b<<" ";
	for(int i = 2 ;i<5;i++){
		c=a+b;
		a=b;
		b=c;
		
		
		cout<<c<<" ";
	}
		
	
	
	
	
	
return 0;	
}