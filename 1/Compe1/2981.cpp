#include<iostream>

using namespace std;

int main(){
    unsigned int a,b;
    cin>>a>>b;
    if((a/b) <10)
        cout<<"A UFSC fecha dia "<<(a/b)+21 <<" de setembro."<<endl;
    else
        cout<<"A UFSC fecha dia "<< (a/b)-9<<" de outubro."<<endl;
    return 0;
}
