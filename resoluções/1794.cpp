#include <stdio.h>

int main() {

    int r;
    int p = 1;

    scanf("%d", &r);

    int aux;

    scanf("%d", &aux);
    
    if(r < aux) p = 0;

    scanf("%d", &aux);
    
    if(r > aux) p = 0;

    scanf("%d", &aux);
    
    if(r < aux) p = 0;

    scanf("%d", &aux);
    
    if(r > aux) p = 0;

    if(p)
        printf("possivel\n");
    else
        printf("impossivel\n");

    return 0;
}

