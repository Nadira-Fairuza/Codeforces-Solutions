#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    string s;
    cin>>s;
	cin>>n;
	bool a=0,b=0;
	for(int i=1;i<=n;i++){
		string t;
		cin>>t;
		if(t==s){
			cout<<"yES"<<endl;
			return 0;
		}
		if(t[0]==s[1])a=1;
		if(t[1]==s[0])b=1;
	}
	if(a&&b)cout<<"yES"<<endl;
	else cout<<"nO"<<endl;
	return 0;
}