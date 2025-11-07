#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,v;cin>>n>>v;
		int a[n],c[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>c[i];
		vector<int> dp(v+1,0); // dp[j] là giá trị lớn nhất có thể với thể tích tối đa là j
		for(int i=0;i<n;i++){
			for(int j=v;j>=a[i];j--){
				dp[j]=max(dp[j],c[i]+dp[j-a[i]]);
			}
		}
		cout<<dp[v]<<endl;
	}
}