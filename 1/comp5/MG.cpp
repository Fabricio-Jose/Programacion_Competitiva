#include <iostream>
#include <vector>
using namespace std;  


int main() { 
    int D,a,sum;
    sum=0;
    vector<int> res; 
    cin>>D;
    while(cin>>a){
        if(sum>=D)
            break;
        res.push_back(tmp)a;
        sum =sum + a;
    }
    if(sum==D){
        cout<<"SI LA ATRAPAMOS:";
        for(int i=0; i<4; i++){
            cout<<" "<<res[i];
        }
        cout<<endl;
    }
    else
        cout<<"NO LA ATRAPAMOS!"<< endl;

    return 0; 
} 
