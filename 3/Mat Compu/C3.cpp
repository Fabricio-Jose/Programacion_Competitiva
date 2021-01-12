#include <bits/stdc++.h>

using namespace std;

struct point {
  long double x, y;
};

const long double zzz = 1e-10;

int cmp(long double x, long double y = 0, long double tol = zzz){
  return( x<=y+ tol) ? (x + tol < y) ? -1 : 0 : 1;
}

bool center(const point &p, const point &q, const point &r, point &c) {
  long double a1=q.x - p.x;
  long double a2=q.y - p.y;
  long double b1=r.x - p.x;
  long double b2=r.y - p.y;
  long double d=a1*b2 - b1*a2;

  if (cmp(d, 0) == 0) {
    return false;
  }

  
//long double c2=(q.x+p.x)/2;
//long double c1=(q.y+p.x)/2;
//long double =(q.y+p.x)/2;

  long double c1=(q.x+p.x)/2;
  long double c2=(q.y+p.y)/2;
  long double d1=(r.x+p.x)/2;
  long double d2=(r.y+p.y)/2;

  long double t1=b1*d1 + b2*d2;
  long double t2=a1*c1 + a2*c2;

  long double x=(b2*t2 - a2*t1)/d;
  long double y=(a1*t1 - b1*t2)/d;

  c.x = x, c.y = y;
  return true;
}

long double ds(const point &a, const point &b) {
  long double x = a.x - b.x, y = a.y - b.y;
  return x*x+y*y;
}

int main() {
    int n;
    while(cin>>n&&n) {
        vector<point> p(n);
    for (auto &i : p) 
        cin >> i.x >> i.y;
    if (n<=2) {
      cout<<n<<endl;
      continue;
    }
    int best=2;
    for(int i=0;i<n;++i){
      for(int j=i+1;j<n;++j){
        for(int k=j+1;k<n;++k) {
          int ans=0;
          point c;
          if (center(p[i],p[j],p[k],c)) {
            long double r=ds(c,p[i]);
            for(int m=0;m<n;m++){
              if (cmp(r,ds(c,p[m]))==0)
                ans++;
            }
            best=max(best, ans);
          }
        }
      }
    }
    cout<<best<<endl;
  }
  return 0;
}
