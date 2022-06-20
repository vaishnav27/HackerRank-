#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;


bool iskaprekar(ll n){
    ll sqr =pow(n,2);
    ll temp=sqr,d=0;
    
    while (temp) {
      temp/=10;
      d++;
    }
    
    d=ceil((float)d/2);
    
    ll left=sqr/pow(10,d);
    ll right=sqr-left*pow(10,d);
    
    return left+right==n;
}
int main(){
    
    ll p,q,count=0; 
    cin>>p>>q;
    for (ll n=p; n<=q; n++) {
        if (iskaprekar(n)) {
           count++;
           cout<<n<<" ";
        }
    }
    if (!count) {
       cout<<"Invalid Range";
    }
    
    return 0;
}
