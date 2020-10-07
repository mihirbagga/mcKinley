#include<iostream>
using namespace std;

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
int part (int arr[], int l, int h)  
{  
    int p = arr[h];   
    int i = (l - 1);   
  
    for (int j = l; j <= h - 1; j++)  
    {  
        
        if (arr[j] < p)  
        {  
            i++;  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[h]);  
    return (i + 1);  
}  

void quicksort(int arr[], int l, int h)  
{  
    if (l< h)  
    {  
        
        int pi = part(arr, l, h);  
  
     
        quicksort(arr, l, pi - 1);  
        quicksort(arr, pi + 1, h);  
    }  
}  
 
  
 
int main()  
{  
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    quicksort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}  
