#include<bits/stdc++.h>
using namespace std ; 



class Student 
{

    public :
    string Name ; 
    int Roll ; 
    int Mark ; 

} ;



int main()
{
    int n ; 
    cin >> n ; 
 
    

    Student a[n] ; 



    
    for(int i=0 ; i<n ; i++) 
    {
        cin >> a[i].Name >> a[i].Roll >> a[i].Mark ;  
    }


    

    for(int i=n-1 ; i>=0 ; i--) 
    {  
        cout << a[i].Name << " " << a[i].Roll << " " << a[i].Mark << endl ; 
    }




    return 0 ; 
}