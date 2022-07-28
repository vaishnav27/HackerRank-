#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

string caesarCipher(string &s, int k) {
    k%=26;
    
    for (int i=0; i<s.size(); i++) {
        if (isalpha(s[i])) {
           if (isupper(s[i])) {
              if (s[i]+k > 'Z')s[i]-=26;
           }
              else {
                 if (s[i]+k > 'z') s[i]-=26;
             }
                s[i]+=k;
           }
         
        }
    
    return s;
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k;
    cin>>k;
    
    cout<<caesarCipher(s,k);
    
    return 0;
}
