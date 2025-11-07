#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
vector<vector<ll>> c;
int n,k;
void solve(){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			if(j==i || j==0) c[i][j]=1;
			else c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
	    cin>>n>>k;
		c.resize(n+1,vector<ll>(n+1));
		solve();
		cout<<c[n][k]<<endl;
	}
}