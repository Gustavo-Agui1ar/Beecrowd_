#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int H1, M1, H2, M2;

    while(cin >> H1 >> M1 >> H2 >> M2 ) {
       
        if(H1==0 && H2==0 && M1==0 && M2==0) 
            break;
       
        int time1_in_minute = H1*60 + M1;
        int time2_in_minute = H2*60 + M2;
        int final_time;

        //it's a another day
        if(time2_in_minute < time1_in_minute)
            final_time =(time2_in_minute + 60*24) - time1_in_minute;
        //it's the same day   
        else
            final_time = time2_in_minute - time1_in_minute;
       
        cout << final_time << endl;
    }

    return 0;
};