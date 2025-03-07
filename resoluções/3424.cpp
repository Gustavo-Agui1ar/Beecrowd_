#include<bits/stdc++.h>

int main() {

    int tSum  = 0, a = 0, n;
    char s;
    std::cin>>n;

    while(n) {
        scanf("%c",&s);

        if(s == 'a') {
            a++;
            n--;    
        }
        else if(s == 'b' ) {
            if(a > 1)
                tSum += a;
            a = 0;
            n--;
        }

    }
    if(a > 1)
        tSum += a;
        
    printf("%d\n", tSum);

    return 0;
}