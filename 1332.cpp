#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

bool isOne(string str) {
   
    string one = "one";
    int count = 0;

    for(ull i = 0 ; i < one.size() ; i++) {
        if(one[i] == str[i])
            count++;
    }
    if(count >= 2)
        return true;
    return false;
}

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(); 

    int N;
    string str;
    cin >> N;

    while(N){
        cin >> str;
        if(str.size() == 5)
            cout<<"3\n";
        else if(isOne(str))
            cout<<"1\n";
        else
            cout<<"2\n";
        N--;
    }

    return 0;
}