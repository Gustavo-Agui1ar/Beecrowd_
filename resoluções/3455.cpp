#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

double graphToDp(double A) {
  return (A * 2) / 3.0;
}

double dpToGraph(double  B) {
  return (B * 3) / 2.0;
}

double geoToGraph(double  C) {
  return (C * 5) / 2.0;
}

double graphToGeo(double  A) {
  return (A * 2) / 5.0;
}


int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie();
    ull A, B, C, resp = 0;
    char c;

    std::cin>>A>>B>>C>>c;

    if(c == 'A') {
        resp = geoToGraph(C) + dpToGraph(B) + A;
    } else if(c == 'B') {
        resp = graphToDp(A) + graphToDp(geoToGraph(C)) + B;
    } else {
        resp = graphToGeo(A) + graphToGeo(dpToGraph(B)) + C;
    }

    std::cout << resp << endl;

    return 0;
}