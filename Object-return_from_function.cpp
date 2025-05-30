#include<bits/stdc++.h>
using namespace std ; 


class Student 
{

    public:
    int roll ; 
    int Class ; 
    double gpa ; 


    Student(int r, int C, double g)
    {
        roll = r ; 
        Class = C ; 
        gpa = g ; 
    }

};

Student fun()
{
    Student kahim(10, 5, 5.00) ; 
    return kahim;
}


int main()
{
    Student rahim(45, 5,3.22) ; 
 
    Student obj = fun() ;  
    cout << rahim.roll << " " << rahim.Class << " " << rahim.gpa << endl ; 
    cout << obj.roll << " " << obj.Class << " " << obj.gpa << endl ; 

    return 0 ;   
}