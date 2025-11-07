#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	queue<int> ss;
	while(n--){
		string s;cin>>s;
		if(s=="PUSH"){
			int a;cin>>a;
			ss.push(a);
		}
		else if(s=="POP"){
			if(!ss.empty()) ss.pop();
		}
		else if(s=="PRINTFRONT"){
			if(!ss.empty()) cout<<ss.front()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
	return 0;
}