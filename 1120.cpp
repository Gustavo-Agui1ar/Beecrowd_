#include <bits/stdc++.h>
 
using namespace std;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
typedef unsigned long long ull;
 
string removeZero(const string& str) {
    size_t non_zero_pos = str.find_first_not_of('0');
    return non_zero_pos == string::npos ? "0" : str.substr(non_zero_pos);
}
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    char c;
    string str;

    while(cin >> c >> str && c != '0' && str != "0") {

        str.erase(remove(str.begin(),str.end(),c),str.end()); 
        str = removeZero(str);
        cout << str << endl;
    }

    return 0;
};