#include <bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		vector<pair<int,int>> a;
		for(int i=0;i<n;i++){
			int x,y;cin>>x>>y;
			a.push_back({x,y});
		}
		sort(a.begin(),a.end(),cmp);
		int x=a[0].second;
		int cnt=1;
		for(int i=1;i<a.size();i++){
			if(a[i].first>=x){
				cnt++;
				x=a[i].second;
			}
		}
		cout<<cnt<<endl;
	}
}