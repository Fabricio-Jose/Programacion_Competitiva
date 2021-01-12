#include<iostream>

using namespace std;

int cuyes(int y){
    int z=0;
    z=y-2;
    return z;
    
}


int main(){
    int x,y,z,c,a;
    cin>>x>>y;
    
    while(x!=0 && y!=0){
        z=0;
        c=1;
        a=0;
        for(int i=y;i>=1;i=i-2){
            z=z+cuyes(i);
            a++;
            if(a>2)
                c=c+c;
            
        }
        z=z+c;
        z=z*x;             
        cout<<z<<endl;       
        
        cin>>x>>y;
    }
    
    return 0;
}
