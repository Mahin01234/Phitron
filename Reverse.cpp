#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    int n ; 
    cin >> n ; 

    int A[10001] ; 
    for(int i=0; i<n ; i++) 
    {
        cin >> A[i] ; 
    }


    for(int i=n-1 ; i >= 0 ; i--) 
    {
        cout << A[i] << " " ; 
    }


    cout << endl ; 


    return 0 ; 
}