#include <bits/stdc++.h>
using namespace std;
void ktao(string &s,int n,int k){
	for(int i=0;i<(n-k);i++) s[i]='0';
	for(int i=n-k;i<n;i++) s[i]='1';
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s=string(n,'0'); // khởi tạo string s có độ dài n toàn số 0
		ktao(s,n,k);
		do{
			cout<<s<<endl;
		}while(next_permutation(s.begin(),s.end()));
	}
	return 0;
}