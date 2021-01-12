#include<iostream>

using namespace std;

void cad(int x, int *a){
    int aux;
    for(int i=1;i<=x;i++){
        aux=i;
        while(aux!=0){
            a[aux%10]++;
            aux/=10;
        }
    }
    for(int i=0;i<=9;i++){
        cout<<a[i]<<" ";
        }
}

int main(){
    int x,r,aux;
    cin>>r;
    for (int j=r;j>0;j--){
        int *a=new int[10];
        for(int k=0;k<10;k++)
            a[k]=0;
        cin>>x;
        cad(x,a);
        cout<<endl;
    }
    return 0; 
}
