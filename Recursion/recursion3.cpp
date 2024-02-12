#include<bits/stdc++.h>
using namespace std;



// BACKTRACKING RECURSION , calling fucntion before printing (photo in mobile)


// 1 to N using BACKTRACKING

// void print(int i , int n){
// 	//i<1  remember this
// 	if(i<1){
// 		return;
// 	}
// 		print(i-1,n);
// 		cout<<i<<" ";
// }

// int main(){
// 	int n = 5;
// 	int i = 1;
// 	print(5,5);
// return 0;	
// }


//N to 1 using backtracking

#include<bits/stdc++.h>
using namespace std;

void print(int i , int n){
	if(i>n){
		return;
	}else{
		print(i+1,n);
		cout<<i<<" ";
	}
}
int main(){
	int i = 1;
	int n = 5;
	print(1,5);
return 0;	
}