#include<bits/stdc++.h>
using namespace std; 


class Student 
{

    public :
    string Name ; 
    int Class ; 
    int Roll ; 
    int Number ; 

} ; 


int main()
{
    int n ; 
    cin >> n ; 
    Student a[n] ; 



    for(int i=0 ; i<n ; i++) 
    {
   
        cin >> a[i].Name >> a[i].Class >> a[i].Roll >> a[i].Number ; 
    }


    Student minimum ; 
    minimum.Number = INT_MAX ; 
    for(int i=0 ; i<n ; i++) 
    {
        if(a[i].Number < minimum.Number)
        {
            minimum = a[i] ; 
        }        
    }

    



    

    Student maximum ; 
    maximum.Number = INT_MIN ; 
    for(int i=0 ; i<n ; i++) 
    {
        if(a[i].Number > maximum.Number)
        {
            maximum = a[i] ; 
        }        
    }

     

    cout << endl ; 

    cout << minimum.Name << " " << minimum.Class << " " << minimum.Roll  << " " << minimum.Number << endl ; 
    cout << maximum.Name << " " << maximum.Class << " " << maximum.Roll  << " " << maximum.Number << endl ; 


    return 0 ; 
}