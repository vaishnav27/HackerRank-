#include <bits/stdc++.h>

using namespace std;

string encryption(string s) {
   
int n=s.size();

int row=floor(sqrt(n));
int col=ceil(sqrt(n));

if (row*col<n) {
   row++;
}

string ans="";
for(int i=0;i<col;i++){
    for(int j=i;j<n;j+=col){
        ans+=s[j];
    }
    ans+=" ";
}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
