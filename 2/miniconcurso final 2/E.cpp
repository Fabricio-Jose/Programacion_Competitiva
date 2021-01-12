#include <bits/stdc++.h> 
using namespace std; 

int max(int a, int b) 
{  
    return (a > b) ? a : b;  
} 
  

void knapSack(int W, vector<int> wt, vector<int> val, int n) 
{ 
    int i, w; 
    int K[n + 1][W + 1]; 
    for (i = 0; i <= n; i++)  
    { 
        for (w = 0; w <= W; w++)  
        { 
            if (i == 0 || w == 0) K[i][w] = 0; 
            else if (wt[i - 1] <= w) 
            {
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);       
            }                
            else 
            {
                K[i][w] = K[i - 1][w]; 
            }
            
            
            
        }

    }
    int res = K[n][W];
    cout << res << " ";
    w = W; 
    int acumulador = 0;
    int elegidos = 0;
    for (i = n; i > 0 && res > 0; i--) 
    { 
        if (res == K[i - 1][w])  
            continue;         
        else { 
  
            acumulador += wt[i-1];
            elegidos++;
            res = res - val[i - 1]; 
            w = w - wt[i - 1]; 
        } 
    }
    cout << elegidos << " "<<W - acumulador << endl;
} 
  
// Driver Code 
int main() 
{ 
    int W, constante;
    while(cin>>W>>constante)
    {
        int movimientos;
        cin>>movimientos;
        vector<int> dinero_total;
        vector<int> costos;
        int distancia, dinero;
        for(int i = 0; i < movimientos; i++)
        {
            cin>>distancia>>dinero;
            dinero_total.push_back(dinero);
            costos.push_back(constante*2*distancia + constante*distancia);
        }
       knapSack(W, costos, dinero_total, dinero_total.size());
    }
     
    return 0; 
}
