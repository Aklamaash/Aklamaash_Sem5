#include<iostream>
#include <algorithm>
using namespace std;

int findSum(int arr[]){
	int total = 0;
	for(auto i:arr){
		total+=i;
	}
	return total;
}

int partitionArray(int arr[]){
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	int sub1[20],sub2[20],i=0;
	for(i=0;i<n;i++){
		if(i<n/2){
			sub1[i] = arr[i];
		}
		if(i>=n/2){
			sub2[i-(n/2)] = arr[i];
		}
	}
	cout<<"Subset 1:";
	for (auto i:sub1){
		cout<<i;
	}
	cout<<"\nSubset 2:";
        for (auto i:sub2){
                cout<<i;
        }
}

int main(){
	
}


