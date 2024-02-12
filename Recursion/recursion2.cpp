#include<bits/stdc++.h>
using namespace std;


string naam = "Abhishek";
void name(int n,int cnt){
	if(cnt == n){return;}
	
		cout<<naam<<endl;
		cnt++;
		name(n,cnt);
}
//we are callling n functions = t/c -> o(n)
						   // = stack space -> o(n) , they are waiting until base condition satisfied
						   //internal memory not hypotetical

int main(){
	int n;
	cin>>n;
	int cnt = 0;
	name(n,cnt);
return 0;	
}