#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N; cin >> N;

    while(N--) {
        string str1,str2;
        cin >> str1 >> str2;

        string str_out("");

        int minSize = min(str1.size(),str2.size());

        rep(i, 0, minSize) {
            str_out += str1[i];
            str_out += str2[i];
        }
        if(str1.size() > minSize) {
            str_out += str1.substr(minSize);
        } else {
            str_out += str2.substr(minSize);
        }
           
        cout << str_out << endl;
    }

    return 0;
};