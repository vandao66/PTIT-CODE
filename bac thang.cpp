#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll solve(int n,int k){
	ll buoc[n+1];
	buoc[0]=1;
	buoc[1]=1;
	for(int i=2;i<=n;i++){
		buoc[i]=0; // tránh giá trị rác ở trong vòng j ( giá trị rác + buoc[i-j])
		for(int j=1;j<=min(i,k);j++){
			buoc[i]=(buoc[i]+buoc[i-j])%mod;
		}
	}
	return buoc[n];
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}