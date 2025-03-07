#include <bits/stdc++.h>

int main() {

    std::map<int, int>mp;
    std::map<int, int>::iterator it;

    int s,v;

    scanf("%d %d", &s,&v);

    for(int i = 0 ; i < v ; i++) {
        
        int aux;
        scanf("%d", &aux);
        mp.insert(std::pair<int, int>(aux, 0));
    }
    
    for(int i = 0 ; i < s ; i++) {
        int aux;
        scanf("%d", &aux);
        it = mp.find(aux);

        if(it != mp.end())
            printf("0\n");
        else {
            mp.insert(std::pair<int, int>(aux, 0));
            printf("1\n");
        }

    }

    return 0;
}