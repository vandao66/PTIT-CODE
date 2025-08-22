#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> a;
vector<char> cur;
int cnt=0;
void solve(int i,int j){
	if(i==n-1 && j==m-1){
		cnt++;
		return;
	}
	if(i>=n || j>=m) return;
	cur.push_back('D');
	solve(i+1,j);
	cur.pop_back();
	cur.push_back('R');
	solve(i,j+1);
	cur.pop_back();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		a.resize(n);
		for(int i=0;i<n;i++) a[i].resize(m);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		solve(0,0);
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}