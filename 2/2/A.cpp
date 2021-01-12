#include <iostream> 
#include <list> 
#include <iterator> 

using namespace std;



int main(){
    int casos,x,y,z;
    list<int> a; 
    
    while(casos!=0){
        for (int i=1;i<=casos;i++){ 
            a.push_back(i); 
        } 
        list <int> :: iterator itt; 
        for(itt=a.begin();itt!=a.end();++itt){
            cout<<*itt<<" ";
        }
        cout<<endl;
        list<int> b;
        cin>>x;
        z=0;
        while(x!=0){
            if(z>0){
                a.remove(x);
            }
            z++;
            cin>>x;
        }
        list <int> :: iterator it; 
        for(it=a.begin();it!=a.end();++it){
            cout<<*it<<" ";
        }
        cout<<endl;
        
    
        
    }


    
  return 0;
}

