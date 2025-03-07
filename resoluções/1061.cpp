#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int dd2,hh2,mm2,ss2;
    int dd,hh,mm,ss;
    int rdd,rhh,rmm,rss;

    cin >> dd;
    cin >> hh >> mm >> ss;
    cin >> dd2;
    cin >> hh2 >> mm2 >> ss2;

    rss = ss2 - ss;
    rmm = mm2 - mm;
    rhh = hh2 - hh;
    rdd = dd2 - dd;

    if(rss < 0) {
        rss = 60 - rss;
        rmm--;
    }
    if(rmm < 0) {
        rmm = 60 - rmm;
        rhh--;
    }
    if(rhh < 0) {
        rhh = 24 - rhh;
        rdd--;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)",rdd, rhh, rmm, rss);

    return 0;
};