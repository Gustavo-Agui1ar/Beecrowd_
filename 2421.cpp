    #include <bits/stdc++.h>
    
    using namespace std;
    
    #define _                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); 

    int main() {
        _;
    
        int box[2];
        int fig1[2];
        int fig2[2];

        //[0] = largura / [1] = altura
        cin >> box[0] >> box[1];
        cin >> fig1[0] >> fig1[1];
        cin >> fig2[0] >> fig2[1];
        
        if (((fig1[0] <= box[0] && fig2[0] <= box[0]) && fig1[1] + fig2[1] <= box[1]) ||
            ((fig1[0] <= box[0] && fig2[1] <= box[0]) && fig1[1] + fig2[0] <= box[1]) ||
            ((fig1[1] <= box[0] && fig2[0] <= box[0]) && fig1[0] + fig2[1] <= box[1]) ||
            ((fig1[1] <= box[0] && fig2[1] <= box[0]) && fig1[0] + fig2[0] <= box[1]) ||
            ((fig1[0] <= box[1] && fig2[0] <= box[1]) && fig1[1] + fig2[1] <= box[0]) ||
            ((fig1[0] <= box[1] && fig2[1] <= box[1]) && fig1[1] + fig2[0] <= box[0]) ||
            ((fig1[1] <= box[1] && fig2[0] <= box[1]) && fig1[0] + fig2[1] <= box[0]) ||
            ((fig1[1] <= box[1] && fig2[1] <= box[1]) && fig1[0] + fig2[0] <= box[0])) 
           printf("S\n");
        else
           printf("N\n");

        return 0;

        return 0;
    };