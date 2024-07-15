#include<stdio.h>
#include<math.h>

#define llu long long  unsigned

llu binexp(llu a,llu b);
llu power(llu x, llu y, llu p);

int main() {

    llu l, j;

    scanf("%llu",&l);
    
    j = (binexp(2,31) - 1);
    printf("%llu\n",power(3,l,j));
    
    return 0;
}

llu power(llu x, llu y, llu p)
{
 
     llu res = 1;   
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
 
        y = y>>1;
        x = (x*x) % p; 
    } 
    return res; 
}

llu binexp(llu a, llu b)
{
    if (b == 0)
        return 1;
    if (b % 2 != 0)
        return a*binexp(a,b-1);
    llu r = binexp(a, b / 2);
    return r*r;
}
