#include <bits/stdc++.h>
using namespace std;
 
int main() {
        string s;
        cin >> s;
        bool iscaps=true;
        for(int i=1;i<s.size();i++){
            if(islower(s[i]))iscaps=false;
        }
        if(iscaps){
            if(isupper(s[0]))cout<<(char)tolower(s[0]);
            else cout<<(char)toupper(s[0]);
            for(int i=1;i<s.size();i++){
                cout<<(char)tolower(s[i]);
            }
        }
        else cout<<s;
}