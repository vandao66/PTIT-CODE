#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		vector<vector<int>> b;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]<a[i]) swap(a[j],a[i]);
			}
			b.push_back(a);
		}
		for(int i=b.size()-1;i>=0;i--){
			cout<<"Buoc "<<i+1<<": ";
			for(int j=0;j<b[i].size();j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}