#include <bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int x){
	int left=0;		
	int right=n-1;
	while(left<right){
		int mid=left+(right-left)/2;
		if(x==a[mid]) return mid+1;
		if(a[left]<a[mid]){
			if(x>a[left] && x<a[mid]){
				right=mid-1;
			}
			else left=mid+1;
		}
		else{
			if(x>a[mid] && x<a[right]) left=mid+1;
			else right=mid-1;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<solve(a,n,x)<<endl;
	}
}