#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int dx[] = {2, 2, 1, 1, -2, -2, -1, -1};
int dy[] = {1, -1, 2, -2, 1, -1, 2, -2};


bool is_possible(int x, int y) {
    return (x >= 0 && x <=7 && y >= 0 && y <=7 );
}

int how_moves(string pos_e, string pos_s) {

    queue<string> q;
    q.push(pos_s);
    map<string, int> chess;
    chess[pos_s] = 0;

    while(!q.empty()) {
        string actual = q.front();
        q.pop();
        
        if(actual == pos_e)
            return chess[actual];
        
        rep(i, 0, 8) {
            int x = actual[0] - 'a', y = actual[1] - '1';// actual position
            int newX = x + dx[i], newY = y + dy[i]; // new position
            string next = string(1, 'a' + newX) + string(1, '1' + newY);//new position
            
            if(is_possible(newX, newY) && chess.find(next) == chess.end()) {
                q.push(next);
                chess[next] = chess[actual] + 1;
            }
        }
        
    }
    return -1;

}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    char str1[3];
    char str2[3];
    while(scanf("%s %s", str1, str2) != EOF) {
       
        int ans = how_moves(str1, str2);
        
        printf("To get from %s to %s takes %d knight moves.\n", str1, str2, ans);     
    }

    return 0;
};