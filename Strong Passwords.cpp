#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong 
    int a=0,b=0,c=0,d=0,req;
  
        for (int i=0; i<n; i++) {
            if(isupper(password[i])){
            a=1;
        }
        else if(islower(password[i])){
              b=1;
        }
        else if (isdigit(password[i])) {
              c=1;
        }else {
              d=1;
        }
    }
    
    req=4-(a+b+c+d);
    if(n+req<6){
       return 6-n;
    }else {
      return req;
    }
    
    return req;
    
  
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

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
