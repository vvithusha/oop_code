#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    string ope ;
    cout<<"Enter the num1 num2 :";
    cin>>num1>>num2;
    cout<<"Enter the operation :";
    cin>>ope;
    if(ope == "exit")
    {
        cout<<"loop exit";
    }
    else if (ope == "+")
    {
        cout<<num1 +num2;
    }
    else if(ope == "-")
    {
        cout<<num1 - num2;
    }
    else if(ope == "*")
    {
        cout<< num1 * num2 ;
    }
    else 
    {
        cout<<"Invalid Operation"<<endl;
    }
    return 0;
}