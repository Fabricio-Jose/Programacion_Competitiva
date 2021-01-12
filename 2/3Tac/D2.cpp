#include <iostream>

using namespace std;

int main()
{
    int N,x,y;
    
    while(cin>>N && N!= 0){
        y= 0;
        while(N--){
            cin>>x;
            y ^= x;
        }
        
        cout<<((y != 0)? "Yes" : "No") <<endl;
    }
    
        
    return 0;
}
