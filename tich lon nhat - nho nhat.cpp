#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		int *c=max_element(a,a+n);
		int *d=min_element(b,b+n);
		cout<<(long long)*c**d<<endl;
	}
}