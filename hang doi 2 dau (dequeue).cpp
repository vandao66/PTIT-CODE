#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	deque<int> ss;
	while(n--){
		string s;cin>>s;
		if(s=="PUSHBACK"){
			int a;cin>>a;
			ss.push_back(a);
		}
		else if(s=="PUSHFRONT"){
			int a;cin>>a;
			ss.push_front(a);
		}
		else if(s=="PRINTFRONT"){
			if(!ss.empty()) cout<<ss.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="PRINTBACK"){
			if(!ss.empty()) cout<<ss.back()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="POPFRONT"){
			if(!ss.empty()) ss.pop_front();
		}
		else{
			if(!ss.empty()) ss.pop_back();
		}
	}
	return 0;
}