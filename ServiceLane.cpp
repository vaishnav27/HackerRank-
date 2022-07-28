#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t,n;
    cin>>n>>t;
    vector<int>width(n);
    
    for (int width_i=0; width_i<n; width_i++) {
        cin>>width[width_i];
    }
    
    for (int a0=0;a0<t;a0++) {
        int i,j;
        cin>>i>>j;
    
    cout<<*min_element(width.begin()+i,width.begin()+j+1)<<endl;
    }
    
    return 0;
}
