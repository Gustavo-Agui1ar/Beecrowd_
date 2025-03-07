    #include <bits/stdc++.h>
    
    using namespace std;
    
    #define _                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); 

    int main() {
        _;

        int mattress[3];
        int door[2];

        //profundidade / altura / largura
        cin >>  mattress[0] >>  mattress[1] >> mattress[2];
        //altura / largura
        cin >>  door[0] >> door[1];

        if(((mattress[1] <= door[0]) && (mattress[2] <= door[1])) ||
        
           ((mattress[1] <= door[0]) && (mattress[0] <= door[1])) ||
        
           ((mattress[2] <= door[0]) && (mattress[0] <= door[1])) ||
        
           ((mattress[2] <= door[0]) && (mattress[1] <= door[1])) ||
        
           ((mattress[0] <= door[0]) && (mattress[1] <= door[1])) ||
           
           ((mattress[0] <= door[0]) && (mattress[2] <= door[1])) )
           printf("S\n");
        else
           printf("N\n");

        return 0;
    };