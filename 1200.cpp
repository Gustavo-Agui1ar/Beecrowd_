#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

class Binary_Tree {
    private:
    
        char _char;
        bool _is_empty;
        Binary_Tree* _left;
        Binary_Tree* _right;
    
    public:

        Binary_Tree();
        Binary_Tree(char c);
        void insert(char c);
        bool search(char c);
        string print_pre_order();
        string print_in_order();
        string print_pos_order();
};

Binary_Tree::Binary_Tree(){
    _left = _right = nullptr;
    _is_empty = true;
}

Binary_Tree::Binary_Tree(char c){
    _left = _right = nullptr;
    _char = c;
    _is_empty = false;
}

void Binary_Tree::insert(char c) {

    if(_is_empty) {
        _char = c;
        _is_empty = false;
        return;
    }

    if(_char < c){
        if(_right == nullptr)
            _right = new Binary_Tree(c);
        else
            _right->insert(c);
    } else {
         if(_left == nullptr)
            _left = new Binary_Tree(c);
        else
            _left->insert(c);
    }
        
}

bool Binary_Tree::search(char c) {
    
    if(_is_empty)
        return false;
    
    if(_char == c)
        return true;
    
    if(_char < c && _right != nullptr)
        return _right->search(c);
    else if( _char > c && _left != nullptr)
        return _left->search(c);

    return false;
}

string Binary_Tree::print_pre_order() {
    string p = "";
    if (!_is_empty) {
        p += _char;
        if (_left != nullptr)
            p += " " + _left->print_pre_order();
        if (_right != nullptr)
            p += " " + _right->print_pre_order();
    }
    return p;
}

string Binary_Tree::print_in_order() {
    string p = "";
    if (!_is_empty) {
        if (_left != nullptr)
            p += _left->print_in_order() + " ";
        p += _char;
        if (_right != nullptr)
            p += " " + _right->print_in_order();
    }
    return p;
}

string Binary_Tree::print_pos_order() {
    string p = "";
    if (!_is_empty) {
        if (_left != nullptr)
            p += _left->print_pos_order() + " ";
        if (_right != nullptr)
            p += _right->print_pos_order() + " ";
        p += _char;
    }
    return p;
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    char op;
    Binary_Tree* tree = new Binary_Tree();

    while(cin >> str) {
        
        if(str == "I") {
            cin >> op;
            tree->insert(op);
        }
        else if(str == "INFIXA") {
            cout << tree->print_in_order() << endl;
        }
        else if(str =="PREFIXA") {
            cout << tree->print_pre_order() << endl;
        }
        else if(str == "POSFIXA"){
            cout << tree->print_pos_order() << endl;
        }
        else if(str == "P") {
            cin >> op;
            if(tree->search(op))
                cout << op << " existe" <<  endl;
            else
                cout << op << " nao existe" << endl;
        }
            
    }
    
    return 0;
};