#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		long long m=1e9+7;
		int ans=0;
		for(int i=0;i<n;i++){
			ans=(ans+(long long)a[i]*i)%m;
		}
		cout<<ans<<endl;
	}
}