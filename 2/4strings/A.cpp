#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

//using namespace std;

bool existe(std::string *A,int cadenas){
    int tam1,tam2;
    int x;
    for(int k=0;k<cadenas;k++){
        for(int l=k+1;l<cadenas;l++){
            x=0;
            tam1=A[k].size();
            tam2=A[l].size();
            if(tam1<tam2){
                for(int i=0;i<tam1;i++){
                    if(A[k][i]==A[l][i]){
                        x++;
                    }
                }
                if(tam1==x)
                    return true;
            }else{
                for(int i=0;i<tam2;i++){
                    if(A[k][i]==A[l][i]){
                        x++;
                    }
                }
                if(tam2==x)
                    return true;
            }
        }
    }
    return false;
}

int main (){
   std::string str,res;

    int cases, cadenas, tam1,tam2;
    int c,q,itera;

    std::cin>>cases;

    for(int i=0;i<cases;i++){
        std::cin>>cadenas;
        std::string *A= new std::string[cadenas];
        for(int j=0;j<cadenas;j++){
            std::cin>>A[j];
        }

        if(existe(A,cadenas))
            std::cout<<"NO"<<std::endl;
        else
            std::cout<<"YES"<<std::endl;
    }
    return 0;
}
