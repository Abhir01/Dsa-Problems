#include<iostream>
using namespace std;

void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}
}

void insertion(int arr[],int n){
	for(int i = 1; i < n ; i++){
		int j = i;
		while(j > 0 && arr[j-1] > arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
			cout<<"runs\n";
		}
		
	}
	print(arr,n);	
}

int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	insertion(arr,n);
		
}

//worst and avg case -> O(N2)
// best case -> O(N) // only outer loop for check