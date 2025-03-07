#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    

    for(int i = 0 ; i < 10 ; i++) {
        int aux;
        cin>>aux;
        if(aux <= 0)
            cout<<"X["<< i << "] = 1" << endl;
        else
            cout<< "X[" <<i <<"] = " << aux << endl;
    }

    return 0;
};