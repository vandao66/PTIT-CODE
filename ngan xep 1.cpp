#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a;
	string s;
	while(cin>>s){
		if(s=="push"){
			int x;cin>>x;
			a.push_back(x);
		}
		else if(s=="pop"){
			if(!a.empty()) a.pop_back();
		}
		else if(s=="show"){
			if(!a.empty()) for(int x:a) cout<<x<<" ";
			else cout<<"empty";
			cout<<endl;
		}
	}
	return 0;
}