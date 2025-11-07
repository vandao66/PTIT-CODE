#include <bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<pair<int,int>> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i].first;
			cin>>a[i].second;
		}
		sort(a.begin(),a.end(),cmp);
		int cnt=1;
		int end=a[0].second;
		for(int i=1;i<a.size();i++){
			if(a[i].first>=end){
				cnt++;
				end=a[i].second;
			}
		}
		cout<<cnt<<endl;
	}
}