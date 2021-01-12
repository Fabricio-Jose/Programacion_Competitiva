#include <iostream>
#include <string>
#include <cmath> 
#include <sstream>

//using namespace std;


bool perfecto(int num,int &c){
    int x;
    for(int i=0;i<100000;i++){
        x=i*i;
        if(num==x){
            c=x;
            return true;
        }
        if(num<x)
            return false;
    }
    return false;
}

int main (){
   std::string str,res;
    
    int cases, tam;
    int c,q,itera;
    std::cin>>cases;
    
    for(int i=0;i<=cases;i++){
        itera=0;
        std::getline(std::cin,str);
        tam=str.size();
        //std::cout<<"el taman es: "<<tam <<std::endl;
        itera=0;
        res="";
        
        if(perfecto(tam,c)){
            q=sqrt(c);
            char m[q][q];
            for(int j=0;j<q;j++){
                for(int k=0;k<q;k++){
                    m[j][k]=str[itera];
                    itera++;
                    
                }
            }
            
            for(int j=0;j<q;j++){
                for(int k=0;k<q;k++){
                    res=res+m[k][j];
                    
                }
            }
            std::cout<<res<<std::endl;

            
        }else{
            std::cout<<"INVALID"<<std::endl;}
        
    }
    return 0;
}
