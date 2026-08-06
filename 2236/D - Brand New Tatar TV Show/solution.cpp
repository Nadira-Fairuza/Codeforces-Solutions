#include<bits/stdc++.h>
using namespace std;
 
void solve(){
int n,k;
cin>>n>>k;
 
map<int,int>mpp;
for(int i=0;i<n;i++){
	int a;
	cin>>a;
	mpp[a]++;
}
int last = -1e9;
for(auto it:mpp){
	if(it.second%2==0 || it.first-last<=k){
		cout<<"yes
";
		return;
	}
	last = it.first;
}
cout<<"No
";
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}