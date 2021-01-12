#include <bits/stdc++.h> 
using namespace std; 
  
int findDigits(int n){ 
    if (n < 0) 
        return 0; 

    if (n <= 1) 
        return 1; 
  
    double digits = 0; 
    for (int i=2; i<=n; i++) 
        digits += log10(i); 
    //digits=digits/1;
    return floor(digits) + 1; 
} 
  
// Driver code  
int main(){ 
    int x;
    cin>>x;
    cout << findDigits(x) << endl; 

    return 0; 
} 
