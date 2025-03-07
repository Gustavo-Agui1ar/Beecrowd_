#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N;

    cin >> N;
    cin.ignore();

    while(N--) {
        
        string str;
        getline(cin, str);
        int mid = str.size()/2;

        string str_left = str.substr(0, mid);
        string str_right = str.substr(mid);

        reverse(str_left.begin(), str_left.end());
        reverse(str_right.begin(), str_right.end());

        string str_out = str_left + str_right;

        cout << str_out << endl;
    }


    return 0;
};