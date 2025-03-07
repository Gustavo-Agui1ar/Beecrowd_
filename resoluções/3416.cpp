#include<bits/stdc++.h>

#define d  double

int main() {

    d p,q,m;

    scanf("%lf %lf %lf", &p, &q, &m);

    d aux = (p*m)/1000;

    aux /= q;

    printf("%d\n",(int)(ceil(aux)*q));

    return 0;
}