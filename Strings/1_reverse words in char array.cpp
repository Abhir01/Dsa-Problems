#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[] = {'t','h','e',' ','s','k','y'};
	int n = sizeof(s)/sizeof(s[0]);
	
	int i = 0;
	while(i < n){
		int start = i;
		while(i < n && s[i] != ' '){
			i++;
		}
		reverse(s + start , s + i);
		i++;
	}
	reverse(s  , s + n);

	for(int i = 0 ; i < n ; i ++){
		cout<<s[i]<<" ";
	}
 }