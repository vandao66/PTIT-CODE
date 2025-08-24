#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
	    ll b=0,c=0;
	    k=min(k,n-k);
		for(int i=0;i<n;i++){
			if(i<k) c+=a[i];
			else b+=a[i];
		}
		cout<<b-c<<endl;
	}
}