#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93];
void fibonacci(){
	f[1]=1;f[2]=1;
	for(int i=3;i<=92;i++){
		f[i]=f[i-2]+f[i-1];
	}
}
char solve(ll n,ll i){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(i<=f[n-2]) return solve(n-2,i);
	else return solve(n-1,i-f[n-2]);
}
int main(){
	int t;
	cin>>t;
	fibonacci();
	while(t--){
		ll n,i;cin>>n>>i;
		cout<<solve(n,i)<<endl;
	}
}