#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2==1){
			cout<<"NO"<<endl;
			continue;
		}
		else{
			int s=sum/2;
			vector<bool> dp(s+1,false);
			dp[0]=true;
			for(int i=0;i<n;i++){
				for(int j=s;j>=a[i];j--){
					if(dp[j-a[i]]== true) dp[j]=true;
				}
				if(dp[s]==true) break;
			}
			if(dp[s]==true) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}