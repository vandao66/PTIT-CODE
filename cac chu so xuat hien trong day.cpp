#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<string> s(n);
		set<char> a;
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<s[i].size();j++){
				a.insert(s[i][j]);
			}
		}
		for(char c:a){
			if(isdigit(c)) cout<<c<<" ";
		}
		cout<<endl;
	}
	return 0;
}