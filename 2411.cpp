#include<bits/stdc++.h>

using namespace std;

#define _ \
 std::ios_base::sync_with_stdio(false); \
std::cin.tie();

typedef unsigned long long ull;

map<ull, int> mp;

int main() {

    int N;
    int x  = 4;
    int y  = 3;
    vector<int> v;

    cin >> N;

    while(N) {
        int var1;
        cin >> var1;
        v.push_back(var1);
        N--;
    }

    for(int i = 0 ; i < v.size(); i++) {
        switch (v[i])
        {
            case 1:
                x += 1;
                y += 2;
                break;
            case 2:
                x += 2;
                y += 1;
                break;
            case 3:
                x += 2;
                y -= 1;
                break;
            case 4:
                x += 1;
                y -= 2;
                break;
            case 5:
                x -= 1;
                y -= 2;
                break;
            case 6:
                x -= 2;
                y -= 1;
                break;
            case 7:
                x -= 2;
                y += 1;
                break;
            case 8:
                x -= 1;
                y += 2;
                break;
        }
        if(x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4) {
            printf("%d\n", ++i);
            return 0;
        }

    }

    printf("%d\n", v.size());

    return 0;
}