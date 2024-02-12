#include<bits/stdc++.h>
using namespace std;

// void print(vector<int> &ans , int i , int j){
// 	int n = ans.size();
// 	if(i>=j){return;}
// 	else{
// 		swap(ans[i],ans[j]);
// 		i++;j--;
// 		print(ans,i,j);
// 	}
// }

void print(vector<int> &ans , int i){
	int n = ans.size();
	if(i>=n/2){return;}
	else{
		swap(ans[i],ans[n-i-1]);
		print(ans,i+1);
	}
}

int main(){
	vector<int>ans={1,2,3,4,22, 6,5};
	int i = 0 , j = ans.size()-1;
	// print(ans,i,j);
	print(ans,i);
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<" ";
	}
return 0;	
}