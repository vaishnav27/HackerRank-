#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void almostSorted(vector<int> arr) {
    
    
if(is_sorted(arr.begin(), arr.end())) {
    cout << "yes"; 
    return;
}
int first, last;

for(int i = 0; i < arr.size() - 1; i++) 
    if (arr[i] > arr[i + 1]) 
        { first = i; break; }

for(int i = arr.size() - 1; i > 0; i--) 
    if(arr[i - 1] > arr[i]) 
        { last = i; break; }

swap(arr[first], arr[last]);

if(is_sorted(arr.begin(), arr.end())) { 
    cout << "yes" << endl << "swap " << first + 1 << " " << last + 1; 
    return; 
}
swap(arr[first], arr[last]);

reverse(arr.begin() + first, arr.begin() + last + 1);

if(is_sorted(arr.begin(), arr.end())) { 
    cout << "yes" << endl << "reverse " << first + 1 << " " << last + 1; 
    return; 
}

cout << "no";
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    almostSorted(arr);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
