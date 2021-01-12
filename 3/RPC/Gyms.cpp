#include<iostream>
#include<vector>

using namespace std;

int fun(int x){
    if(x==1)
        return 0;
    
    if(x==2)
        return 1;
    
    int a=3;
    int c=2;
    for(int i=3;i<x;i++){
        c++;
        a=a+c;
    }
    return a;
}

int matriz(int x,int *a){
    int alfa =0;
    int y=fun(x);
    
    int **array = new int *[y];
    
    for(int i=0;i<y;i++){
        array[i]= new int[2];
    }
    

    int p;
    p=0;
    
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            array[p][0]=a[i];
            array[p][1]=a[j];
            p++;          
        }
    }
    
    /*for(int i=0;i<y;i++){
        for(int j=0;j<2;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }*/
    
    for(int i=0;i<y;i++){
        for(int j=0;j<2;j++){
            for(int k=i+1;k<y;k++){
                for(int l=0;l<2;l++){
                    if(array[i][j]==array[k][l]){
                        alfa++;
                    }
                }
            }
            
        }
    }
    
    
    return alfa;
    
}




int main(){
    int x;
    
    while(cin>>x){
        int *a = new int[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        cout<< matriz(x,a) <<endl;
        
        
        
    } 
    return 0;
}

