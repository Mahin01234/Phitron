#include<bits/stdc++.h>
using namespace std ; 




class Student 
{
    public :
    int id ; 
    string name ;
    char section ; 
    int mark ;  




} ; 



int main()
{
    int t ; 
    cin >> t ; 
    while (t--) 
    {
        Student student[3] ; 
        for(int i=0; i<3 ; i++) 
        {
            cin >> student[i].id >> student[i].name >> student[i].section >> student[i].mark ; 
        } 




        Student total_Make = student[0] ; 
        for(int i=1 ; i<3 ; i++) 
        {
            if(student[i].mark > total_Make.mark) 
            {
                total_Make = student[i] ; 
            }
            else if (student[i].mark == total_Make.mark && student[i].id < total_Make.id)
            {
                total_Make = student[i] ; 
            }
        } 




        cout << total_Make.id << " " << total_Make.name << " " << total_Make.section << " " << total_Make.mark << endl ; 
    }



    
    return 0 ; 
}