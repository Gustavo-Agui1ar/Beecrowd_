    #include <bits/stdc++.h>
    
    using namespace std;
    
    #define _                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); 

    int main() {
        _;
        int aux;
        priority_queue <int, vector<int>, greater<int> > min_heap; 

        cin >> aux;
        min_heap.push(aux);
        cin >> aux;
        min_heap.push(aux);
        cin >> aux;
        if(aux > min_heap.top()) {
            min_heap.pop();
            min_heap.push(aux);
        }

        cout << min_heap.top() << endl;

        return 0;
    };