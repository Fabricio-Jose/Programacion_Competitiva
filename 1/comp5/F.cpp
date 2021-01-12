#include<iostream>
#include <string>

using namespace std;

int main(){
    int N,R;
    string x,y;
    while(true){
        cin>>N>>R;
        if(N==0){
            if(R==0)
                break;            
        }else{
            string *a=new string[N];
            int *b=new int[N];
            
            for(int i=0;i<R;i++){
                cin>>x>>y;
                
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
