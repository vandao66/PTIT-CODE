#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n],b[m],c[m+n];
		int l=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			c[l++]=a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			c[l++]=b[i];
		}
		sort(c,c+l);
		for(int x:c) cout<<x<<" ";
		cout<<endl;
	}
}