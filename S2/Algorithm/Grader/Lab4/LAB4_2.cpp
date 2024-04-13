#include<iostream>
using namespace std;
void subset1(int arr[],int x[],int k,int n,int target){
	if(k==n){
		int sum=0;
		for(int i=0;i<k;i++){
			if(x[i]==1){
				sum+=arr[i];
			}
		}
		if(sum==target){
			for(int i=0;i<k;i++){
				if(x[i]==1){
					cout<<arr[i]<<" ";
				}	
			}
			cout<<endl;	
		}
	}
	else{
		x[k]=1;
		subset1(arr,x,k+1,n,target);
		x[k]=0;
		subset1(arr,x,k+1,n,target);
	}
}
int main(){
	int n,target;
	cin>>n>>target;
	int arr[n], x[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	subset1(arr,x,0,n,target);
	return 0;
}
