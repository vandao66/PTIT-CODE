#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<ll> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		auto it=max_element(a.begin(),a.begin()+k);
		int l=0,r=k-1;
		int x=it-a.begin();
		ll ans=*it;
		cout<<ans<<" ";
		while(r<n-1 && l<n-k){
			r++;
			l++;
			if(a[r]>ans){
				ans=a[r];
				x=r;
			}
			if(x<l){
				it=max_element(a.begin()+l,a.begin()+r+1);
				ans=*it;
				x=it-a.begin();
			}
			cout<<ans<<" ";
		}
		cout<<endl;
	}
}