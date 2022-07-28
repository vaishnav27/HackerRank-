# Jumping-on-the-Clouds-Revisited

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
  
    vector<int>v(n);
    
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
  
    int currentCloud=0;
    int energy=100;
  
  
    do {
       currentCloud=(currentCloud+k)%n;
       energy--;
    if (v[currentCloud]==1)
       energy-=2;
    
    }while (currentCloud!=0);
    
    cout<<energy<<endl;
}
