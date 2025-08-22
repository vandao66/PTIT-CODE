#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> a,cur;
vector<vector<string>> ans;
void solve(int len,int j){
    if(len>=2) ans.push_back(cur);
	for(int i=j;i<a.size();i++){
		if(cur.empty() || stoi(a[i])>stoi(cur.back())){
			cur.push_back(a[i]);
	    	solve(len+1,i+1);
	    	cur.pop_back();
		}
	}
}
int main(){
	cin>>n;
	a.resize(n);
	for(int i=0;i<n;i++) cin>>a[i];
	solve(0,0);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	ans.clear();
}