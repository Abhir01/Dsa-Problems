#include<iostream>
using namespace std;

void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}
}

void bubble(int arr[] , int n){
	
	// for(int i = 0 ; i < n-1 ; i++){  //for making j work as it is sorting from bac
	// 	for(int j = 0 ; j < n-i-1 ; j++){
	// 		if(arr[j+1] < arr[j]){
	// 			swap(arr[j+1] , arr[j]);
	// 		}
	// 	}
	// }
	
	for(int i = n-1 ; i >= 1 ; i--){ //to manage the j loop 
		int iswapped = 0;
		for(int j = 0 ; j <= i-1 ; j++){  //j<=i-1 as adjacent compare hore to agla bhi hojaega
			if(arr[j+1] < arr[j]){
				swap(arr[j+1],arr[j]);
				iswapped = 1;
			}
		}
		if(iswapped == 0) break; //just one time check and gets break
		cout<<"runs\n";
	}
	
	print(arr,n);
	
}

int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	bubble(arr,n);
		
}


// worst case -> o(N2)
// avg case -> O(N2)
// best case -> O(N)