#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int cnt=0;
		int minx;
		for(int i=0;i<n-1;i++){
		    minx=i;
			int check=0;
			for(int j=i+1;j<n;j++){
				if(a[j]<a[minx]){
					minx=j;
					check=1;
				}
			}
			if(check){
				swap(a[i],a[minx]);
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}