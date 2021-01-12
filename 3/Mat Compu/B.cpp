#include <bits/stdc++.h>

#define PI 3.14159265

using namespace std;

int main() {
    float t;
    while (scanf("%f", &t) != EOF) {
        float dia1 = t/2;
        float dia2 = dia1/3;
        float circ = PI*(dia1*dia1/4 - dia2*dia2/4);
        cout<<fixed<<setprecision(2)<<circ + t<<endl;
    }
}
