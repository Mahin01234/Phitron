#include<bits/stdc++.h>
using namespace std ; 


class Student 
{
    public : 
    char Name[100] ; 
    int roll ; 
    char Section ; 
    double gpa ; 



} ; 



int main()
{ 
    Student a , b ; 
    
    // a.gpa = 3.00 ; 
    // a.roll = 165 ; 
    // char temp[100] = "Sakib" ; 
    // strcpy (a.Name, temp) ;

    
    // strcpy (a.Section , "A") ;  
    
    cin.getline(a.Name, 100) ;
    cin  >> a.roll >> a.Section >> a.gpa ;
    

    cin.ignore() ; 

    cin.getline(b.Name , 100) ;
    cin >> b.roll >> b.Section >> b.gpa ;


    cout << a.Name << " " << a.roll << " " << a.Section << " " << a.gpa << endl ; 
    cout << b.Name << " " << b.roll << " " <<  b.Section << " " << b.gpa << endl ; 


    return 0 ; 
}
