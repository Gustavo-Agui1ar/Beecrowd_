#include<bits/stdc++.h>


int main() {

    char str[3];

    scanf("%c %c %c", (str), (str +1) ,(str +2));

    if((str[2] == 'O' &&  str[0] == 'X' && str[1] == 'X') || (str[0] == 'O' && str[1] == 'X' && str[2] == 'X'))
        printf("Alice\n");
    else if(str[0] == 'X' && str[1] == 'O' && str[2] == 'X')
        printf("*\n");
    else 
        printf("?\n");


    return 0;
}