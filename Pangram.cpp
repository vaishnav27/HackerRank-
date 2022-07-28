#include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    bool c[26];
    
    for (int i=0; i<s.size(); i++) {
       if (isalpha(s[i])) {
          c[s[i]-'a']=true;
       }
    }
    for (int i=0; i<26; i++) {
        if (!c[i]) return "not pangram";
        
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
