#include<bits/stdc++.h>

using namespace std;

map<char,int>mp;

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(); 

    mp['0'] = 6;
    mp['1'] = 2;
    mp['2'] = 5;
    mp['3'] = 5;
    mp['4'] = 4;
    mp['5'] = 5;
    mp['6'] = 6;
    mp['7'] = 3;
    mp['8'] = 7;
    mp['9'] = 6;

    int N;
    long sum;
    string str;


    cin>>N;
    while(N) {

        sum = 0;
        cin>>str;

        for(unsigned long long i = 0 ; i < str.size() ; i++) {
            sum += mp[str[i]];
        }
        cout<<sum<<" leds"<<endl;
        N--;
    }
    

    return 0;
}