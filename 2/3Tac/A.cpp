#include<iostream> 
#include <string>
#include <sstream>

using namespace std;

int main(){
    
    int cases,x,y;
    int count;
    int orden=0;
    
    string s="";
    
    cin>>cases;
    for(int i=0;i<cases;i++){
        cin>>x;
        count=1;
        
        while(true){
            y=x*count;
            s = static_cast<std::ostringstream*>(&(std::ostringstream() << y))->str();
            cout<<s<<endl;
            
        }
    }
    
    return 0;
}
