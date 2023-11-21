#include<iostream>
#include<algorithm>
using namespace std;
void sorting(int arr[],int n){
	sort(arr,arr+n);
}
int main(){
	int arr[5]={5,4,3,2,1};
	sorting(arr,5);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
