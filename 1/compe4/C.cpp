#include<iostream>

using namespace std;


long int out(long int *A, long int cases){  
    long int max=1;
    long int zero=0;
    long int posi=0;
    if(cases==1){
        return A[0];
    }
    for(long int i=cases-1;i>0;i--){
        if(A[i]>0){
            max=max*A[i];
            posi++;
        }else{
            break;
        }
    }
    
    for(long int i=0;i<cases;i=i+2){
        if(A[i]<0 && A[i+1]<0){
            max=max*A[i]*A[i+1];
            zero++;
        }else{
            break;
        }
    }
    if(posi!=0){
        return max;
    }else{
        if(zero!=0){
            return max;
        }else{
            return A[cases-1];
        }
    }
    
}

void swap(long int* a, long int* b){
    long int t = *a;  
    *a = *b;  
    *b = t;  
}    

long int partition (long int *arr, long int low, long int high){  
    long int pivot = arr[high];
    long int i = (low - 1);    
    for (long int j = low; j <= high - 1; j++){  
        if (arr[j] < pivot){  
            i++;   
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  

void quickSort(long int *arr, long int low, long int high){
    if (low < high){
        long int pi = partition(arr, low, high);  
  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }
}
  
int main(){
    long int cases,e;
    long int lk=0;
    long int cas=1;
    while(cin>>cases){
        if(cases<1){
            break;
        }
        if (cases>18){
            break;
        }
        long int *A=new long int[cases];
        for(long int i=0;i<cases;i++){
            cin>>e;
            A[i]=e;
            if(e<-10){
                lk++;
                break;
            }
            if(e>10){
                lk++;
                break;
            }
        }
        if(lk==1){
            break;
        }
        quickSort(A,0,cases-1);

        cout<<"Case #"<<cas<<": el maximo producto es "<<out(A,cases)<<"."<<endl<<endl;
        cas++;
        delete [] A;
    }
    
    return 0; 
}
