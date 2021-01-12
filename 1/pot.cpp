#include<iostream>
#include<math.h>

using namespace std;

int main(){
int n,a,x,y,z,acumulado;
cin>>a;
cin>>n;
x=0;
y=1;
acumulado=1;
z=0;
for (int i=1;i<=n;i++){
    acumulado=acumulado*a;
    x=i*acumulado;
    z=z+x;
    
}
cout<<z<<endl;
return 0;
}
