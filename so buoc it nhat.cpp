#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];for(int i=0;i<n;i++) cin>>a[i];
		int b[n];for(int i=0;i<n;i++) b[i]=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[j]<=a[i]){
					b[i]=max(b[j]+1,b[i]);
				}
			}
		}
		auto ans=max_element(b,b+n);
		cout<<n-*ans<<endl;
	}
}