#include<bits/stdc++.h>
using namespace std;

//last line not suceesfully executes i,e keep on calling (SEGMENTATION FAULT), stack overflow
//where there is numerous function call is waiting in stack space and we keep on calling


//infinite recursion example
// void add(int a){
// 	cout<<a<<" ";
// 	add(a);
// }

// int main(){
// 	int a = 1;
// 	add(1);
// return 0;	
// }


// Recursion -> when a function call itself until a specified condition is met
				// (BASE CONDITION)
				// call -> call -> call (if condint satisfied)
				// went back -> wb -> wb
				// there can be more than one single base condition



//base case wala recursion 
int cnt = 0;
void sum(){
	if(cnt == 3){return;}
	cout<<cnt<<" ";
	cnt++;
	sum();
}
int main(){
	sum();
return 0;	
}