#include<iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int ver(int a, int b){
    int c,d;
    c = abs(a-b);
    d = 26-c;
    if(c>d){
        return d;
    }else{
        return c;
    }       
}

int main(){
    int a,b,c,d,iter;
   
    int saltos=0;
    string cad,tem;
    cin>>cad;
    tem=cad;
    
    for(int i=0;i<tem.size();i++)
        tem[i]='a';
    while(cad!="*"){
        iter=0;
        while(tem!=cad){
            
            for(int i=iter;i<tem.size();i++){
                a = (int)tem[i]-97;
                b = (int)cad[i]-97;
                z = ver(a,b);
                saltos = saltos + z;
                
                a = (int)tem[i+1]-97;
                b = (int)cad[i+1]-97;
                if(ver(a,b)>ver(a+z,b)){
                    for(int j=i+1;j<tem.size();j++){
                        
                        ;
                        
                        
                    }
                }

            }
        }
        iter=0;
        cout<<saltos<<endl;
        cin>>cad;
        saltos=0;
    }    
    return 0;
}
