#include<iostream>
using namespace std;

long int modulo(long int x, long int m){
    return x%m;
}



void orderN(long int *a,long int *b,long int cases){
    long int t1,t2;
    for(long int i=0;i<cases;i++){
        for(long int j=0;j<cases;j++){
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
void order_iguales(long int *a,long int *b,long int cases){
    long int t1,t2;
    for(long int i=0;i<cases;i++){
        for(long int j=i+1;j<cases;j++){
            if(b[i]==b[j]){
                
                if(a[i]%2==0 && a[j]%2!=0){
                        t1=a[i];
                        a[i]=a[j];
                        a[j]=t1;
                }else{
                    if(a[i]%2!=0 && a[j]%2!=0){
                            if(a[i]<a[j]){
                                t1=a[i];
                                a[i]=a[j];
                                a[j]=t1;
                            }
                    }else{
                        if(a[i]%2==0 && a[j]%2==0){
                                if(a[i]>a[j]){
                                    t1=a[i];
                                    a[i]=a[j];
                                    a[j]=t1;
                                }
                        }
                    }
                } 
                
                
                
                
                
            }
        }
    }
}



int main(){
    long int cases,m;
    while(true){
        cin>>cases>>m;   
        if((cases==0) && (m==0)){
            break;            
        }else{
            long int *a=new long int[cases];
            for(long int i=0;i<cases;i++){
                cin>>a[i];
            }
            long int *b=new long int [cases];
            for(long int i=0;i<cases;i++){
                b[i]=modulo(a[i],m);
            }

            cout<<cases<<" "<<m<<endl;
            orderN(a,b,cases);
            order_iguales(a,b,cases);
            
            for(long int i=0;i<cases;i++){
                cout<<a[i]<<endl;
            }
            /*for(int i=0;i<cases;i++){
                cout<<b[i]<<endl;
            }*/
        }
    }
    return 0;
}
