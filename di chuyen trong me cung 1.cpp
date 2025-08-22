#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> a;
vector<char> cur;
int check=0;
void solve(int i,int j){
	if(i==n-1 && j==n-1){
		for(int i=0;i<cur.size();i++) cout<<cur[i];
		cout<<" ";
		check=1;
		return;
	}
	if(i>=n || j>=n || a[i][j]==0) return;
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
		cin>>n;
		a.resize(n);
		for(int i=0;i<n;i++) a[i].resize(n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		solve(0,0);
		if(!check) cout<<-1;
		check=0;
		cout<<endl;
	}
	return 0;
}