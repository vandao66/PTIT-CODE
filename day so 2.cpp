#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<vector<int>> ans;
void solve(vector<int> a){
	if(a.size()<=0) return;
	else{
		ans.push_back(a);
	}
	vector<int> cur;
	for(int i=0;i<a.size()-1;i++){
		cur.push_back(a[i]+a[i+1]);
	}
	solve(cur);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		a.resize(n);
		for(int i=0;i<n;i++) cin>>a[i];
		solve(a);
		for(int i=ans.size()-1;i>=0;i--){
			cout<<"[";
			for(int j=0;j<ans[i].size();j++){
				if(j!=ans[i].size()-1) cout<<ans[i][j]<<" ";
				else cout<<ans[i][j];
			}
			cout<<"] ";
		}
		cout<<endl;
		ans.clear();
	}
}