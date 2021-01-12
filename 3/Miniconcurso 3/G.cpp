#include <iostream>
#include <string>
#include <cmath> 
#include <sstream>

using namespace std;

int main(){
    int x,y;
    int x1,y1;
    
    int divx,divy;
    int c=0;
    int c1=0;
    
    while(cin>>x>>y){
        if(x==0 && y==0)
            break;

        string *A = new string[x];
        for(int i=0;i<x;i++){
            cin>>A[i];
        }
        cin>>x1>>y1;
        
        divx=x1/x;
        divy=y1/y;
        
        string *B = new string[x1];        
        
        c=0;
        c1=0;
        for(int i=0;i<x1;i++){
            if(c==divx){
                c1++;
                c=0;
            }
            B[i]=A[c1];
            c++;            
        }
        
        /*for(int i=0;i<x1;i++){
            cout<<B[i]<<endl;
        }*/
        c=0;
        c1=0;
        
        for(int i=0;i<x1;i++){
            for(int j=0;j<B[i].size();j++){
                for(int k=0;k<divy;k++){
                    cout<<B[i][j];
                }
            }
            cout<<endl;
        }
        
        //cout<<A[0][0]<<endl;
        delete [] B;
        delete [] A;
    }  
 return 0;   
}
