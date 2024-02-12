#include<bits/stdc++.h>
using namespace std;

bool print(string &s, int i,int j){
	if(i>=j){return 1;}
	if(s[i]!=s[j]){return 0;}
	else{
		 print(s,i+1,j-1);
	}
}

int main(){
	string s;
	cin>>s;
	int i = 0 , j = s.length()-1;
	if(print(s,i,j)){
		cout<<1;
	}else{
		cout<<0;
	}
	
return 0;	
}