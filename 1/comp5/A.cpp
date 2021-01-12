#include<iostream>

using namespace std;

int main(){
    int cases,c0,c1;
    
    while(true){
        cin>>cases;
        c0=0;
        c1=0;
        if(cases==0){
            break;            
        }else{
            int *a=new int[cases];
            for(int i=0;i<cases;i++){
                cin>>a[i];
                if(a[i]==1){
                    c1++;
                }else{
                    c0++;
                }
            }
            if(c0>c1){
                cout<<"Y"<<endl;
            }else{
                cout<<"N"<<endl;
            }
        }
    }
    
    return 0;
}
