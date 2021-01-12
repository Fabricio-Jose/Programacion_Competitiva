#include <iostream>
#include <math.h>
using namespace std;

int fun(int a, int b, int c, int x){
    int f,g,h,i;
    g=pow(x,2);
    f=a*g;
    h=b*x;
    i=f+h+c;
    return i;
}

int main() 
{
    int a,b,c,d,L;
    int p;
    int co;
    while(true){
        co=0;
        cin>>a>>b>>c>>d>>L;
        if((a==0) && (b==0) && (c==0) && (d==0) && (L==0)){
            //cout<<"entramos"<<endl;
            break;
            
        }else{
            for(int i=0;i<=L;i++){
                p=fun(a,b,c,i);
                if(p%d==0){
                    co=co+1;
                }            
            }
            cout<<co<<endl;
        }
    }
    return 0;
}
