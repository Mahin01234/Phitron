#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    char ch ; 
    scanf("%c" , &ch) ; 

    if (ch >= '0' && ch <= '9')  
    {
        cout << "IS DIGIT" ;  
    }
    else
    {
        cout << "ALPHA" << endl ; 
        cout << (ch >= 'A' && ch <='Z' ? "IS CAPITAL" : "IS SMALL") << endl ; 
        
    }
    
    return 0 ; 
}
