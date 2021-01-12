#include <bits/stdc++.h>

using namespace std;

bool repite(vector<long long> nums, long long k) {
    for (long long i=0; i<nums.size(); i++) {
        if (nums[i] == k) return 1;
    }
    return 0;
}

long long ndigitos(long long n) {
    long long cont = 0;
    while (n > 0) {
        n /= 10;
        cont++;
    }
    return cont;
}

int main() {
    long long t, n,te,k;
    long long f;
    te=0;
    cin>>t;
    while (t--) {
        cin>>n>>k;
        long long q, mayor = 0;
        vector<long long> nums;
        q = k*k;
        te=q;
        while (!repite(nums, te)) {
            nums.push_back(te);
            /*while (ndigitos(q) > n) {
                q /= 10;
            }*/

            f=ndigitos(q)-n;
            q=q/(f*10);
            k = q;
            
            if (k > mayor) mayor = k;
            
            q = k*k;
            te=q;
        }
        
        printf("%d\n", mayor);
        }
    return 0;
}





