#include<iostream> 

using namespace std;

int masuno(int x){
    x=x+1;    
    return x;
}

int inver(int x){
    int x_1,y_1,y,z,c,c_1;
    c_1=1;
    c=0;
    x_1=x;
    y=0;
    
    while(x_1>1){
        x_1=x_1/10;
        c++;
    }
    c--;
    for(int i=0;i<c;i++){
        c_1=c_1*10;
    }
    
    while(x>1){
        z=x%10;
        z=z*c_1;
        y=y+z;
        x=x/10;
        c_1=c_1/10;
    }
    return y;
}


int respuesta(int x, int y){
    //si los extremos son mayores
    if()
    
    
    
}


int main(){
    int casos,x,y;
    cin>>casos;
    for(int i=0;i<casos;i++){
        cin>>x>>y;
        cout<<respuesta<<endl;
    }
    
  return 0;
}





