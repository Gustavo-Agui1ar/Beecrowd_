#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

bool is_first;

typedef struct binary_tree {
    
    ull _value;
    struct binary_tree* _left;
    struct binary_tree* _right;
}Binary_Tree;

Binary_Tree* insert(Binary_Tree* root, ull c);
Binary_Tree* remove(Binary_Tree* root, ull c);
bool search(Binary_Tree* root, ull c);
void print_pre_order(Binary_Tree* root);
void print_in_order(Binary_Tree* root);
void print_pos_order(Binary_Tree* root);

Binary_Tree* insert(Binary_Tree* root, ull c) {


    if(!root) {
        root = (Binary_Tree*)malloc(sizeof(Binary_Tree));
        root->_value = c;
        root->_left = NULL;
        root->_right = NULL;
    }

    else if(root->_value < c){
        root->_right = insert(root->_right, c);
    }
    else {
        root->_left = insert(root->_left, c);
    }
        
    return root;
}

Binary_Tree* remove(Binary_Tree* root, ull c) {
    
    if(!root) return root;
    
    if(c < root->_value)
        root->_left = remove(root->_left, c);
   
    else if(c >root->_value)
        root->_right = remove(root->_right, c);
   
    else {
        if(!root->_left && !root->_right) {
            free(root);
            return NULL;
        }
            
        else if(!root->_left) {
            Binary_Tree* temp = root->_right;
            free( root);
            return temp;
        }
        else if(!root->_right) {
            Binary_Tree* temp = root->_left;
            free(root);
            return temp;
        }
        else {
            Binary_Tree* prev = root;
            Binary_Tree* actual = root->_left;
            while(actual->_right) {
                prev = actual;
                actual = actual->_right;
            }
            root->_value = actual->_value;

            if(prev->_right == actual)
                prev->_right = actual->_left;
            else
                prev->_left = actual->_left;
            free(actual);
        }
    }
    return root;
}

bool search(Binary_Tree* root, ull c) {
    if(!root) return false;
    
    if(root->_value == c) return true;
    
    if(root->_value < c)  return search(root->_right, c);
  
    else if( root->_value > c) return search(root->_left, c);
}

void print_pre_order(Binary_Tree* root) {

    if (root) {
        
        if(is_first) {
            cout << root->_value;
            is_first = false;
        } else 
            cout << " " << root->_value;
        
        if (root->_left)  print_pre_order(root->_left);
        if (root->_right) print_pre_order(root->_right);
    }
}

void print_in_order(Binary_Tree* root) {

    if (root) {

        if (root->_left) print_in_order(root->_left);
        
        if(is_first) {
            cout << root->_value;
            is_first = false;
        } else 
            cout << " " << root->_value;

        if (root->_right) print_in_order(root->_right);
    }
}

void print_pos_order(Binary_Tree* root) {

    if (root) {
        
        if (root->_left)  print_pos_order(root->_left);
        if (root->_right) print_pos_order(root->_right);
        
        if(is_first) {
            cout << root->_value;
            is_first = false;
        } else 
            cout << " " << root->_value;
    }
}

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    int op;
    Binary_Tree* tree = NULL;

    while(cin >> str) {
        
        if(str == "I") {
            cin >> op;
            tree = insert(tree, op);
        }
        else if(str == "P") {
            cin >> op;
            if(search(tree, op))
                cout << op << " existe" <<  endl;
            else
                cout << op << " nao existe" << endl;
        }
        else if(str == "R") {
            cin >> op;
            tree = remove(tree, op);
        }
        else {

            is_first = true;
            if(str == "INFIXA") {
                print_in_order(tree), cout << endl;
            }
            else if(str =="PREFIXA") {
                print_pre_order(tree), cout << endl;
            }
            else if(str == "POSFIXA"){
                print_pos_order(tree), cout << endl;
            }
        }     
    }
    return 0;
};