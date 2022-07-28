#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

long strangeCounter(long t) {
    
    long value=3;
    
    while (t>value) {
        t=t-value;
        value*=2;
    }    
    
    return value-t+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    long t = stol(ltrim(rtrim(t_temp)));

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
