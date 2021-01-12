#include <bits/stdc++.h>
using namespace std;
int main(){
    int z;
    cin>>z;
    int x,y;
    for(int f=0;f<z;f++){
        cin>>x;
        cin>>y;
        int c=0;
//empieza condicion
        if ((x!=y) && (x%y!=0)) {
        if(x<y){
            c=y-x;
        }
        else{
        if (x>y && y!=1){
            c = y*((x/y)+1) - x;
        }            
        }
        }
        cout<<c<<endl;
    }
    return 0;
}




/*
 
 
 
 
 */
