#include <bits/stdc++.h>
 
using namespace std;
 
#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 

int main() {
    _;

    int A,B,C;

    cin >> A >> B >> C;

    A /= 2;
    B /= 3;
    C /= 5;

    if(A <= B && A <= C)
        cout << A <<  endl;

    else if(C <= B && C <= A)
        cout << C <<  endl;

    else if(B <= A && B <= C)
        cout << B <<  endl;


    return 0;
};