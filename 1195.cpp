#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

class Binary_Tree {
    private:
    
        int _value;
        Binary_Tree* _left;
        Binary_Tree* _right;
    
    public:

        Binary_Tree();
        Binary_Tree(int value);
        void insert(int value);
        void print_pre_order();
        void print_in_order();
        void print_pos_order();
};

Binary_Tree::Binary_Tree(){
    _left = _right = nullptr;
    _value = -1;
}

Binary_Tree::Binary_Tree(int value){
    _left = _right = nullptr;
    _value = value;
}

void Binary_Tree::insert(int value) {

    if(_value == -1) {
        _value = value;
        return;
    }

    if(_value < value){
        if(_right == nullptr)
            _right = new Binary_Tree(value);
        else
            _right->insert(value);
    } else {
         if(_left == nullptr)
            _left = new Binary_Tree(value);
        else
            _left->insert(value);
    }
        
}
void Binary_Tree::print_pre_order() {
    
    printf(" %d", _value);
    
    if(_left != nullptr)
        _left->print_pre_order();
    
    if(_right != nullptr)
        _right->print_pre_order();

}

void Binary_Tree::print_in_order() {
   
    if(_left != nullptr)
        _left->print_in_order();
    
    printf(" %d", _value);
    
    if(_right != nullptr)
        _right->print_in_order();

}

void Binary_Tree::print_pos_order() {
    
    if(_left != nullptr)
        _left->print_pos_order();
    
    if(_right != nullptr)
        _right->print_pos_order();
    
    printf(" %d", _value);
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    int num; 

    cin >> N;

    rep(i,1,N+1){
        cin >> num;
        Binary_Tree tree;
        while(num--) {
            int aux;
            cin >> aux;
            tree.insert(aux);
        }
        printf("Case %d:\n",i);
        printf("Pre.:"); tree.print_pre_order();
        printf("\nIn..:"); tree.print_in_order();
        printf("\nPost:"); tree.print_pos_order();
        puts("\n");
    }

    return 0;
};