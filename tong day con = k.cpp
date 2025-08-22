#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a,cur;
vector<vector<int>> b;
int cnt=0;
void solve(int j,int sum){
	if(sum==k){
		b.push_back(cur);
		cnt++;
		return;
	}
	if(sum>k || j==n) return;
	for(int i=j;i<n;i++){
		cur.push_back(a[i]);
		solve(i+1,sum+a[i]);
		cur.pop_back();
	}
}
int main(){
	cin>>n>>k;
	a.resize(n);
	for(int i=0;i<n;i++) cin>>a[i];
	solve(0,0);
	for(int i=b.size()-1;i>=0;i--){
		for(int j=0;j<b[i].size();j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<cnt<<endl;
}