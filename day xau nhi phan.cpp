#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93];
void dodai(){
	f[1]=1;
	f[2]=1;
	for(int i=3;i<93;i++) f[i]=f[i-1]+f[i-2];
}
ll solve(ll n,ll k){
	if(n==1) return 0;
	if(n==2) return 1;
	if(k>f[n-2]) return solve(n-1,k-f[n-2]);
	else return solve(n-2,k);
}
int main(){
	int t;
	cin>>t;
	dodai();
	while(t--){
		ll n,k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}