#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int ans=-1;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			if(x==k){
				ans=i+1;
			}
		}
		if(ans!=-1) cout<<ans<<endl;
		else cout<<"NO"<<endl;
	}
}