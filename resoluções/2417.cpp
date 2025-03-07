    #include <bits/stdc++.h>
    
    using namespace std;
    
    #define _                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); 

    int main() {
        _;

        int C[3];
        int F[3];
        int Cv,Fv;

        cin >> C[0] >> C[1] >> C[2] >> F[0] >> F[1] >> F[2];

        Cv = C[0]*3 + C[1]; 
        Fv = F[0]*3 + F[1]; 

        if(Cv == Fv) {
            if(C[2] == F[2])
                printf("=\n");
            else if(C[2] > F[2])
                printf("C\n");
            else
                printf("F\n");

        }
        else if(Cv > Fv)
            printf("C\n");
        else 
            printf("F\n");

        return 0;
    };