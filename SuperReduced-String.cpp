#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin>>s;
    
    for (int i=0; i<(((int)s.length())-1); i++) {
        if (s[i]==s[i+1]) {
           s.erase(i,2);
            i=-1;
        }
       
    }
    if (s.length()==0) {
       cout<<"Empty String";
    }else {
       cout<<s;
    }
}
