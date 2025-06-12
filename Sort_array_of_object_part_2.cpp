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





 bool cmp (Student l , Student r) 
{
//     // Number or Roll ; 
//     if(l.Number <= r.Number) 
//     {
//         return true ; 
//     }
//     else
//     {
//         return false ; 
//     }  
       // ---> OR 
       return l.Number <= r.Number ; 
}



int main()
{
    int n ; 
    cin >> n ; 
    Student a[n] ; 



    for(int i=0 ; i<n ; i++) 
    {
   
        cin >> a[i].Name >> a[i].Class >> a[i].Roll >> a[i].Number ; 
    }
    

    cout << endl ; 
    sort(a, a+n, cmp) ; 
    for(int i=0 ; i <n ; i++)
    {
        cout << a[i].Name << " " << a[i].Class << " " << a[i].Roll << " " << a[i].Number << endl ; 
    }
    return 0 ; 
}