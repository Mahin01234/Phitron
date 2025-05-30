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


int main()
{
    Student rahim(45, 5,3.22) ; 
    Student Kahim(10, 5, 5.00) ; 


    cout << rahim.roll << " " << rahim.Class << " " << rahim.gpa << endl ; 
    cout << Kahim.roll << " " << Kahim.Class << " " << Kahim.gpa << endl ; 

    return 0 ;   
}