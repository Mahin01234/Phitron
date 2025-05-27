#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    int a,b,c ; 
    cin >> a >> b >> c ; 

    int Min = min(a , min(b,c)) ; 
    int Max = max(a, max(b,c)) ; 

    cout << Min << " " << Max << endl ;  

    return 0 ; 
}