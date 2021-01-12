#include <iostream>
using namespace std;

int main(){
    int N,Q,M, a, x, y,tam,z,j,p;
    cin>>N>>Q>>M;
    int *A=new int[N];
    for(int i=0;i<N;i++)
        cin>>A[i];

    while(cin>>a>>x>>y){
        z=1;
        j=0;
        if(a==1){
            tam=y-x+1;
            int *B=new int[tam];
            for(int i=0;i<tam; i++)
                B[i]=A[x-1+i];
            
            for (int i=1;i<tam;i++){
                for(j=0;j<i;j++) 
                    if(B[i]==B[j]) 
                        break; 
                if(i==j) 
                    z++; 
            }
            cout<<z<<endl;
        }
        if(a==2){
            A[x-1]=y;
        }
    }
    
    return 0;
}
