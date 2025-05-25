// min, max 


#include<bits/stdc++.h>

using namespace std ; 

int main() 
{
    int a,b; 
    cin >> a >> b ; 


    cout << min(a,b) << endl ; 
    cout << max(a,b) << endl ; 
    

    //cout << min({1,2,3,4,5}) << endl ; 
    //cout << max({100,200,300,400,500}) << endl ;


    swap(a,b) ;
    cout << a << " " << b << endl ;  


    return 0 ; 
}