#include<bits/stdc++.h>

int main() {

    int v, t;
    double s;

    std::cin>>v>>t;
    s = v*t;
    for(int  i = 1 ; i <= 9 ; i++) {
        if(i-1)printf(" ");
       printf("%.lf",(ceil(s*(i/10.0))));
    }

    printf("\n");
    return 0;
}