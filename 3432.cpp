#include<bits/stdc++.h>

int main() {

    int lido, n = 8;

    while (n)
    {
        std::cin>>lido;

        if(lido == 9) {
            printf("F\n");
            return 0;
        }

        n--;
    }
    printf("S\n");


    return 0; 
}