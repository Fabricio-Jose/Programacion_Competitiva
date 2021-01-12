#include<iostream>

using namespace std;

int facto(int x){
    int a=x;
    int b=1;
    while(a>=1){
        b=b*a;
        a--;
    }
    return b;
}

int main(){
    
    int caso,total,igual,limite;
    
    while(cin>>caso){
        total=0;
        while(caso!=0){
            for(int i=1;i<=caso;i++){
                
                if(facto(i)==caso){
                    caso=0;
                    total++;
                    break;                    
                }else{
                if(facto(i)>caso){
                    limite=i;
                    break;
                }}
            }
            if(caso==0){
                break;
            }
            
            caso=caso-facto(limite-1);
            total=total+1;
            
        }       
        cout<<total<<endl;
    }
    return 0;
}
