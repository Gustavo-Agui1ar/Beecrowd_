#include <stdio.h>

#define ll long long

int main() {

    unsigned ll a,b;

    scanf("%llu%llu",&a,&b);

    unsigned ll sum = (((b)*(b+1))/2) - (((a-1)*(a))/2);
    
    printf("%llu", sum);

    return 0;
}