#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>p(100);
    
    for (int i=1; i<=n; i++) {
        cin>>p[i];
    }
    
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (p[p[j]]==i) {
                cout<<j<<endl;
            }
        }
    }
    return 0;
}
