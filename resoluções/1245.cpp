#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

map<int,int>bootLeft;
map<int,int>bootRight;

int RightBoots() {
    int sum = 0;
    int rightB;

    for(auto &it : bootLeft) {
        rightB = bootRight[it.first];
        sum += min(it.second, rightB);
    }

    return sum;
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    int num;
    char c;

    while(scanf("%d", &N) != EOF) {
        bootLeft.clear();
        bootRight.clear();
        while(N--) {

            scanf("%d %c", &num, &c);
            
            if(c == 'D') 
                bootRight[num]++;
            else
                bootLeft[num]++;
            
        }
        printf("%d\n", RightBoots());
    }
 
    return 0;
};