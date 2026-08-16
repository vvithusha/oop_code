#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two number:";
    cin>>num1>>num2;
    cout<<"Enter the operation:";
    char sym;
    cin>>sym;

    if(sym == '+')
    {
        cout<<"Addition : "<<num1+num2<<endl;
    }
    else if(sym == '-')
    {
        cout<<"Subraction : "<<num1-num2<<endl;
    }
    else if(sym == '*')
    {
        cout<<"Multiplication : "<<num1*num2<<endl;
    }
    else if(sym == '/')
    {
      if(num2 == 0)
      {
        cout<<"Division by zero is not allowed "<<endl;
      }   
      else 
      {
        cout<<"Division : "<<num1/num2<<endl;
      }
        
    }
    return 0;
}