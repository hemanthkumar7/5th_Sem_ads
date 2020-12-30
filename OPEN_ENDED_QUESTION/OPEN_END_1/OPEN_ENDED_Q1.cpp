#include<bits/stdc++.h> 
using namespace std; 
  
void findElements(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        int count = 0; 
        for (int j = 0; j < n; j++) 
            if (arr[j] > arr[i]) 
                count++; 
  
        if (count >= 2) 
            cout << arr[i] << " "; 
    } 
} 
  
int main() 
{ 
    int n;
    int arr[n];
    
    cout << "Size of array:"<<endl;
    cin >> n;;
    
    cout << "Enter the elements:"<<endl;
    for (int i=0;i<n;i++)
       cin >> arr[i];
    
    cout << "Array after excluding Two greatest elements:"<<endl;   
    findElements(arr, n); 
    return 0; 
}
