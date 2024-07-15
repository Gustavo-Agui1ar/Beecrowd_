#include<bits/stdc++.h>
#include<stdio.h>

#define MAX 100001
#define FenOp(S) ((S) & (-S))

int FenTree[MAX];
int V[MAX];
int size;

void fenUpdate(int index, int value) {

    while(index <= size) {
        FenTree[index] += value;
        index += FenOp(index);
    }
}

int fenQuery(int index) {

    int s = 0;
    while(index > 0) {
        s += FenTree[index];
        index -= FenOp(index);
    }
    return s;
}

int main() {

    memset(FenTree, 0 , sizeof(FenTree));
   
    char type;
    int  index;

    scanf("%d", &size);

    for(int i = 1 ; i <= size ; i++) {
        scanf("%d", &V[i]);
        fenUpdate(i,V[i]);
    }

    getchar();
    while(scanf("%c %d",&type, &index) != EOF)
    {   
        if(type == 'a') {
            fenUpdate(index, -V[index]);
        }
        else {
            printf("%d\n", fenQuery(index - 1));
        }
        getchar();
    }

    return 0;
}
