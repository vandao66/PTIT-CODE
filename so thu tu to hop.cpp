#include <bits/stdc++.h>
using namespace std;
int n,k;
int check(vector<int> a,vector<int> b){
	return a==b;	
}
int solve(vector<int> &b){
	int i=k-1;
	while(i>=0 && b[i]==n-k+i+1) i--;
	if(i<0) return 0;
	b[i]++;
	for(int j=i+1;j<k;j++) b[j]=b[j-1]+1;
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int> a(k);
		for(int i=0;i<k;i++) cin>>a[i];
		vector<int> b(k);
		int cnt=1;
		for(int i=1;i<=k;i++) b[i-1]=i;
		while(!check(a,b)){
			if(solve(b)) cnt++;
		}
		cout<<cnt<<endl;
	}
}