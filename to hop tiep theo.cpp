#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k+1];
		map<int,int> s;
		// nhập và đếm tần suất
		for(int i=1;i<=k;i++){
			cin>>a[i];
			s[a[i]]++;
		}
		int cnt=0;
		int check=0;
		// sinh tổ hợp mới
		for(int i=k;i>=1;i--){
			if(a[i]<n-(k-i)){
				a[i]++;
				for(int j=i;j<k;j++){
					a[j+1]=a[j]+1;
				}
				check=1;
				break;
			}
		}
		// kiểm tra số phần tử khác ban đầu
		for(int i=1;i<=k;i++){
			if(s[a[i]]==0) cnt++;
		}
		if(!check) cout<<k<<endl;
		else cout<<cnt<<endl;

	}
}