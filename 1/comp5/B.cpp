#include<iostream>

using namespace std;

int main(){
    int a[]={1,3,5,10,25,50,100};
    
    int caso;
    while(cin>>caso){
        if(caso<1){
            break;
        }
        if(caso>100){
            break;
        }
        for(int i=0;i<7;i++){
            if(caso==1){
                cout<<"Top 1"<<endl;
                break;
            }
            if(caso==100){
                cout<<"Top 100"<<endl;
                break;
            }
            if(caso>50){
                if (caso<100){
                    cout<<"Top 100"<<endl;
                    break;
                }
            }
            if(caso>a[i]){
                if (caso<=a[i+1]){
                    cout<<"Top "<<a[i+1]<<endl;
                    break;
                }
            }
        }
    }    
}
