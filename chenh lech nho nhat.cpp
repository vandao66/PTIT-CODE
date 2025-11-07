#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		int min=1e9;
		for(int i=0;i<n-1;i++){
			ll cur=abs(a[i]-a[i+1]);
			if(cur < min) min=cur;
		}
		cout<<min<<endl;
	}
}