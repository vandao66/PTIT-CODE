#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		stack<int> ss;
		vector<int> ans(n,-1);
		for(int i=0;i<n;i++){
			while(!ss.empty() && a[i]>a[ss.top()]){
				ans[ss.top()]=a[i];
				ss.pop();
			}
			ss.push(i);
		}
		for(int i=0;i<n;i++) cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}