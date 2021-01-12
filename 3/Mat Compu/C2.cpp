#include <iostream>
#include <algorithm>

#define MAXN 201

using namespace std;

typedef long long ll;

ll X[MAXN],Y[MAXN],bt[MAXN],resp,n,sqy[MAXN][MAXN],sqx[MAXN][MAXN],xy[MAXN][MAXN];

void addCircle(ll A,ll B,ll C){
 ll cof1 = X[A]*(Y[B] - Y[C]) - Y[A]*(X[B] - X[C]) + xy[B][C];
 if(cof1 == 0) return;
 ll cof2 = bt[A]*(Y[B] - Y[C]) - Y[A]*(bt[B] - bt[C]) + sqy[B][C];
 ll cof3 = bt[A]*(X[B] - X[C]) - X[A]*(bt[B] - bt[C]) + sqx[B][C];
 ll cof4 = bt[A]*(xy[B][C]) - X[A]*(sqy[B][C]) + Y[A]*(sqx[B][C]);
 ll temp = 0;
 for(ll i=1;i<=n;i++){
  ll val = cof1*bt[i] - cof2*X[i] + cof3*Y[i] - cof4;
  if(val == 0) temp++;
 }
 resp = max(temp,resp);
}
int main(){

 while(cin >> n && n){
  resp = min(n,2LL);
  for(ll i=1;i<=n;i++){
   cin >> X[i] >> Y[i];
   bt[i] = X[i]*X[i] + Y[i]*Y[i];
  }
  for(ll i = 1; i <= n-1;i++){
   for(ll j = i+1;j<=n;j++){
    xy[i][j] = X[i]*Y[j] - X[j]*Y[i];
    sqx[i][j] = bt[i]*X[j] - bt[j]*X[i];
    sqy[i][j] = bt[i]*Y[j] - bt[j]*Y[i];
   }
  }
  for(ll i=1;i<=n-2;i++){
   for(ll j=i+1;j<=n-1;j++){
    for(ll k=j+1;k<=n;k++){
     addCircle(i,j,k);
    }
   }
  }
  cout << resp << '\n';
 }
 return 0;
}
