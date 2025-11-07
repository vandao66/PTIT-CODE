#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll mod=1e9+7;
vector<vector<ll>> matrandonvi(){
	vector<vector<ll>> m1(n,vector<ll>(n,0));
	for(int i=0;i<n;i++) m1[i][i]=1;
	return m1;
}
vector<vector<ll>> nhanmatran(vector<vector<ll>> a,vector<vector<ll>> b){
	vector<vector<ll>> c(n,vector<ll>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int m=0;m<n;m++){
				c[i][j]=(c[i][j]+ a[i][m]*b[m][j])%mod;
			}
		}
	}
	return c;
}
vector<vector<ll>> luythua(vector<vector<ll>> a,ll k){
	if(k==1) return a;
	if(k==0) return matrandonvi();
	vector<vector<ll>> b=luythua(a,k/2);
	vector<vector<ll>> tmp=nhanmatran(b,b);
	if(k%2==0) return tmp;
	else return nhanmatran(tmp,a);
}
int main(){
	int t;cin>>t;
	while(t--){
		ll k;
	    cin>>n>>k;
		vector<vector<ll>> a(n,vector<ll>(n));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		vector<vector<ll>> ans=luythua(a,k);
		ll sum=0;
		for(int j=0;j<n;j++) sum=(sum+ans[j][n-1])%mod;
		cout<<sum<<endl;
	}
}