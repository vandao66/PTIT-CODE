#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		vector<ll> s1(a),s2(b),s3(c);
		for(int i=0;i<a;i++) cin>>s1[i];
		for(int i=0;i<b;i++) cin>>s2[i];
		for(int i=0;i<c;i++) cin>>s3[i];
		
		int x=0,y=0,z=0;
		int check=0;
		while(x<a && y<b && z<c){
			if(s1[x]==s2[y] && s2[y]==s3[z]){
				cout<<s1[x]<<" ";
				x++;
				y++;
				z++;
				check=1;
			}
			else if(s1[x]<s2[y]) x++;
			else if(s2[y]<s3[z]) y++;
			else z++;
		}
		if(!check) cout<<-1;
		cout<<endl;
	}
}