#include<bits/stdc++.h>
#include<math.h>

int main() {

    int N;

    scanf("%d",&N);

    unsigned long long sum[N+2];

    for(int i = 0 ; i < N+2 ; i++)
        sum[i] = 0;

    int b = 1000;
    for(int j = 3 ; j >= 0 ; j--) {
        for(int i = 0 ; i < N+2 ; i++) {
            int aux;
            std::cin>>aux;
            sum[i] += aux*b;
        }
        b /= 10;
    }

    for(int i = 1 ; i < N + 1; i++) {
        long long unsigned j = ((sum[0]*sum[i]) + sum[N+1]);
        printf("%c", (char)(j%257));
    }
 
    return 0;
}