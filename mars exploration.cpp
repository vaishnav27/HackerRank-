#include <bits/stdc++.h>

using namespace std;


int marsExploration(string s) {
    int count=0;
    for(int i=0;i<s.length();i+=3){
        if (s[i]!='S') {
        count++;
        }
        if (s[i+1]!='O') {
        count++;
        }
        if (s[i+2]!='S') {
        count++;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
