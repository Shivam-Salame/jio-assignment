#include <iostream>
// cstdlib is used for rand()
#include<cstdlib>

using namespace std;

int main()
{   
    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    int string_length = sizeof(alphanum)-1;
    
    int n;
    
    cout<<"Enter the length of password : "<<endl;
    cin>>n;
    
    cout<<"password : ";
    for(int i = 0; i < n; i++)
    cout << alphanum[rand() % string_length];
    
}