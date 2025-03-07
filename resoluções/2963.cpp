#include<bits/stdc++.h>

#define MAX 100000

int main() {

    int  a, aux,  sum = 0, n, eleito = 1;

    std::cin>>n>>a;

    while(n) {
        
        std::cin>>aux;

        if(aux > a) {
            eleito = 0;
            break;
        }
        sum += aux;
        if(sum > MAX) {
            eleito = 0;
            break;
        } 
        n--;
    }

    if(eleito)
        printf("S\n");
    else
        printf("N\n");

}