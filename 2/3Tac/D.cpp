#include<iostream>

using namespace std;

int main(){
    int N, total=0;
    cin>>N;
    while(N!=0){
        int *a=new int[N];
        for(int i=0;i<N;i++){
            cin>>a[i];            
            total=total+a[i];
        }
        
        if(N%2==1){
            cout<<"Yes"<<endl;
        }else{
            /*if(total%2==1){
                cout<<"Yes"<<endl;
            }
            else{*/
                cout<<"No"<<endl;
            //}
        }               
        
        delete[] a;
        cin>>N;
        total=0;
    }
    
    
    return 0;
}
