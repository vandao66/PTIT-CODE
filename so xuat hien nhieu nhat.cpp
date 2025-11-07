#include <bits/stdc++.h>
using namespace std;
map<int,int> s;
int sapxep(int a,int b){
    if(s[a]==s[b]) return a<b;
    return s[a]>s[b];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		s.clear();
		int n;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			s[a[i]]++;
		}
		sort(a.begin(),a.end(),sapxep);
		for(int i:a) cout<<i<<" ";
		cout<<endl;
	}
}