// #include<unordered_map>
// #include<iostream>
// using namespace std;

// int main(){
	
// 	string s;
// 	cin>>s;

// 	int arr[26] = {0};

	

// 	for(int i = 0 ; i < s.size() ; i++){
// 		int ind = s[i] - 'a';
// 		arr[ind]++;
// 	}

// 	int maxi = -1;
// 	int ans = 0;
// 	for(int i = 0 ; i < 26 ; i++){
// 		// cout<<arr[i]<<endl;
// 		if(arr[i] > maxi){
// 			ans = i;
// 		} 
// 	}

// 	char ch = 'a' + ans; 
// 	cout<<ch;


// 	// cout<<arr[0];


	
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	string s;cin>>s;
// 	// cout<<s;
// 	int arr[26] ={0}; 
// 	for(int i = 0 ; i < s.size() ; i++){
// 		int ch = s[i] - 'a';
// 		arr[ch] += 1;
// 		// cout<<ch<<" ";
// 	}



// 	int maxiInd = 0;
// 	int maxCount = 0;
// 	for(int i = 0 ; i < 26 ; i++){
// 		if(arr[i] > maxCount){
// 			maxiInd = i;
// 			maxCount = arr[i];
// 		}
// 		// cout<<arr[i]<<" ";
// 	}
	
// 	// cout<<maxiInd<<" "<<maxCount;

	
// 	char op = maxiInd + 'a';
// 	cout<<op<<endl;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	// cout<<s;
	int arr[26]= {0}; 
	for(int i = 0 ; i < s.size() ; i++){
		int ch = s[i] - 'a';
		arr[ch]++;
	}

	int maxInd = 0;
	int maxEle = 0;
	for(int i = 0 ; i < 26 ; i++){
		if(arr[i] > maxEle){
			maxEle = arr[i];
			maxInd = i;
		}
	}

	char op = maxInd + 'a';
	cout<<op<<endl;

	return 0;
}