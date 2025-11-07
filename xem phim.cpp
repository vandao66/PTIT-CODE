#include <bits/stdc++.h>
using namespace std;

int main(){
	int c,n;cin>>c>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	vector<bool> dp(c+1,false);
	dp[0]=true;
	for(int i=0;i<n;i++){
		for(int j=c;j>=a[i];j--){
			if(dp[j-a[i]]==true) dp[j]=true;
		}
	}
	for(int i=c;i>=0;i--){
		if(dp[i]==true){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}