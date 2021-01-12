#include<iostream>
#include <cmath> 

using namespace std;

bool esPrimo(long int a){
    long int x=sqrt(a);
    for(int i=2;i<x;i++){
        if(a%i==0)
            return false;
    }
    return true;
}
int main(){
    long int n;
    while(cin>>n){
    long int raiz=sqrt(n);
    long int mayor=0;
    for(long int i=2;i<=raiz;i++){
        if(n%i==0){
            if(esPrimo(i)){
                if(i>mayor)
                    mayor=i;
            }
        }
    }
    cout<<mayor<<endl;
    }
    return 0;
}
