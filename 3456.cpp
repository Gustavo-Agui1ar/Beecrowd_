#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned long n; 
    
    scanf("%lu", &n);

    printf("%lu\n",n);

    while (n > 7) {
        
        if(n < 10)
            break;
            
        n = 3*(n/10) + n%10;
        
        printf("%lu\n",n);

    }

    return 0;
}
