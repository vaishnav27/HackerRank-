#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


void separateNumbers(string s) {
   
    string validstr,start;
    
    for (int i=1; i<=s.size()/2 && s!=validstr; i++) {
        start=validstr=s.substr(0,i);
        for (int j=1; validstr.size()<s.size(); j++) {
             validstr+=to_string(stoll(start)+j);
        }
    }
    if (s==validstr) {
       cout<<"YES"<<" "<<start<<endl;
    }else{
       cout<<"NO"<<endl;
    }
}

int main()
{
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

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
