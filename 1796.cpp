#include<stdio.h> 

#define ll long long

int main() {
    ll unsigned t,aux;
    ll unsigned y = 0;
    ll unsigned n = 0;
    
    scanf("%llu",&t);

    for(ll unsigned i = 0 ; i < t ; i++) {
        scanf("%llu", &aux);
        if(aux == 0)y++;
        else if(aux == 1) n++;
    }   

    if(y > n)
        printf("Y\n");
    else
        printf("N\n");

    return 0;
}