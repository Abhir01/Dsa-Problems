 #include<iostream>
using namespace std;

void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}
}
void selection(int arr[], int n){
	for(int i = 0 ; i < n-1; i++){
		int minInd = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[minInd]){
				// swap(arr[j] , arr[minInd]);
				// if you do swap here then the first min will be swapped 
				// and suppose if there is another minimum than the current 
				// it will not be swapped 
				minInd = j;
			}
		}
		// after all the elements traversed by j now we can swap 
		swap(arr[minInd] , arr[i]);
	}
}

int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	selection(arr,n);
	print(arr,n);	
}

//best , worst , avg  -> o(N2)