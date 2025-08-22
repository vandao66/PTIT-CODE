#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a,cur;
void solve(int len,int now){
	if(len==k){
		for(int i=0;i<cur.size();i++){
			cout<<cur[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=now;i<a.size();i++){
		cur.push_back(a[i]);
		/* sau khi solve(0,0) đến câu lệnh gọi hàm solve này sẽ tạo ra 1 nhánh 
		 in hết các câu lệnh trong nhánh này sẽ quay lại nhánh ban đầu solve(0,0) */
		solve(len+1,i+1); 
		cur.pop_back();
	}
}
int main(){
	cin>>n>>k;
	a.resize(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	a.erase(unique(a.begin(), a.end()), a.end()); // loại trùng
	solve(0,0);
}