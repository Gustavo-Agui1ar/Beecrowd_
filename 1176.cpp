#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

#define phi  (1 + sqrt(5))*0.5

double binet(unsigned int n)
{
    double fib = (pow(phi,n) - pow(1-phi,n))/sqrt(5);
    return round(fib);
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;

    while(N) {
        int aux;
        cin >> aux;
         
        printf("Fib(%d) = %.lf\n",aux, binet(aux));

        N--;
    }

    return 0;
};