#include<bits/stdc++.h>
using namespace std ; 



class Student 
{
    public:
    string name ; 
    int roll , math , english ; 
    Student(string name, int roll , int math , int english) 
    {
        this->name = name ; 
        this->roll = roll ;  
        this->math = math ; 
        this->english = english ; 
    }



    void total() 
    {
        cout << "Total marks of " << name << " = " << math + english << endl ; 
    }
} ; 




int main()
{
    Student sakib("Sakib Ahmed" , 23, 85 , 92) ; 
    sakib.total() ; 
    Student rakib("RAkib Ahmed" , 25 , 65, 95) ; 
    rakib.total() ; 
    return 0 ; 
}