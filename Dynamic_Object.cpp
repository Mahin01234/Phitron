#include<bits/stdc++.h>
using namespace std ; 

class Student 
{
    public:
    int roll ; 
    int Class ; 
    double gpa ; 


    Student(int roll, int Class, double gpa) 
    {
        this->roll = roll ; 
        this->Class = Class ; 
        this->gpa = gpa ; 
    } 


} ; 



int main()
{
    Student rahim(45, 5, 3.44) ;
    Student * kahim = new Student(10, 5, 3.88) ; 
    

    cout << rahim.roll << " " << rahim.Class << " " << rahim.gpa << endl ; 
    cout << kahim->roll << " " << kahim->Class  << " " << kahim->gpa << endl ; 

    
    return 0 ; 
} 