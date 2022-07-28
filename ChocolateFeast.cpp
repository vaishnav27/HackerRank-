#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t,n,c,m;;
    cin>>t;
    for(int i=0;i<t;i++){
       cin>>n>>c>>m;
   
    int chocolate=n/c,eat=0,wrappers=0;
    while (chocolate>0)
    {
        eat+=chocolate;
        wrappers+=chocolate;

        chocolate=wrappers/m;
        wrappers=wrappers%m;
    } 
    cout<<eat<<endl;
    }


 return 0;
}
