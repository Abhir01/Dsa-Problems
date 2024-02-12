#include<bits/stdc++.h>
using namespace std;

int  main(){

	string s = "daabcbaabcbc";
	string part = "abc";

	while(s.length()!=0 && s.find(part) < s.length()){
		s.erase(s.find(part), part.length());
	}

	//o(n) -> s.find (n baar m present ho sakta hai in worst case)
	//o(n) -> s.erase (n baar m ko erase karna pad sakta hai)
	//o(m) -> m ko n baar find aur erase karna hai
	//o(n2 * m)

	cout<<s;
	return 0;
}