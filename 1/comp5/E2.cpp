#include<iostream>
using namespace std;

int modulo(int x, int m){
    return x%m;
}



void orderN(int *a,int *b,int cases){
    int t1,t2;
    for(int i=0;i<cases;i++){
        for(int j=0;j<cases;j++){
            if(b[i]<b[j]){
                t1=b[i];
                b[i]=b[j];
                b[j]=t1;
                
                t2=a[i];
                a[i]=a[j];
                a[j]=t2;            
            }
        }
    }
}
void order_iguales(int *a,int *b,int cases){
    int t1,t2;
    for(int i=0;i<cases;i++){
        for(int j=i;j<cases;j++){
            if(b[i]==b[j]){
                
                if(a[i]%2==0){
                    if(a[j]%2!=0){
                        t1=a[i];
                        a[i]=a[j];
                        a[j]=t1;
                    }else{
                        if(a[j]%2==0){
                            if(a[i]>a[j]){
                                t1=a[i];
                                a[i]=a[j];
                                a[j]=t1;
                            }
                        }  
                    }
                }else{
                    if(a[i]%2!=0){
                        if(a[j]%2!=0){
                            if(a[i]<a[j]){
                                t1=a[i];
                                a[i]=a[j];
                                a[j]=t1;
                            }
                        }
                    }/*else{
                        if(a[i]%2==0){
                            if(a[j]%2==0){
                                if(a[i]>a[j]){
                                    t1=a[i];
                                    a[i]=a[j];
                                    a[j]=t1;
                            }
                            }
                        }
                    }*/
                }
                
                
                
                
            }
        }
    }
}



int main(){
    int cases,m;
    while(true){
        cin>>cases>>m;   
        if((cases==0) && (m==0)){
            break;            
        }else{
            int *a=new int[cases];
            for(int i=0;i<cases;i++){
                cin>>a[i];
            }
            int *b=new int [cases];
            for(int i=0;i<cases;i++){
                b[i]=modulo(a[i],m);
              //  cout<<b[i]<<endl;
            }
            //order_iguales(a,b,cases);
            cout<<cases<<" "<<m<<endl;
            orderN(a,b,cases);
            order_iguales(a,b,cases);
            
            for(int i=0;i<cases;i++){
                cout<<a[i]<<endl;
            }
            /*for(int i=0;i<cases;i++){
                cout<<b[i]<<endl;
            }*/
        }
    }
    return 0;
}
