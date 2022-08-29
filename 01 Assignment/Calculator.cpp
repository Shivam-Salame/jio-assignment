#include<bits/stdc++.h>
using namespace std;

int main(){
    char Operator;
    double num1, num2, result;

    cout<<"choose operator sign between [ +, -, /, * ]"<<endl;
    cin>>Operator;
    cout<<"Enter Operand 1"<<endl;
    cin>>num1;
    cout<<"Enter Operand 2"<<endl;
    cin>>num2;

    switch(Operator){
        case '+' : result = num1 + num2;
                   cout<<"result = "<< result;
                   break;
         
        case '-' : result = num1 - num2;
                   cout<<"result = "<< result;
                   break;
         
        case '/' : result = num1 / num2;
                   cout<<"result = "<< result;
                   break;
         
        case '*' : result = num1 * num2;
                   cout<<"result = "<< result;
                   break;

        default : cout<<"Please choose correct operator";
                  break;
    } 

}