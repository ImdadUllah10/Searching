#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={3,6,2,1,8,0,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"original Array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
		cout<<endl;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
	swap(arr[j],arr[j+1]);
	
	}
		}
	}
	cout<<"\nSorted array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	int target,found;
	cout<<"\nEnteryour target:";
	
	cin>>target;
	int low=0;
	int high=n-1;
	found=-1;
	for(int i=0;i<n;i++){
		//to find mid value
		int mid=low+(high-low)/2;
		if (arr[mid]==target){
			found=mid;
			break;
			}else if(arr[mid]<target){
				low=mid+1;
			}else{
				high=mid-1;
			}
				
			}
	if(found!=-1){
		cout<<"Element "<<target<<"found at index:"<<found;
	}else{
			cout<<"not found";
		
	}
	
	
	return 0;
}