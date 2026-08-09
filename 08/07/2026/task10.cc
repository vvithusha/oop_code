#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num<=10)
    {
        cout<<"*"<<endl;
    }
    else
    {
        cout<<"@"<<endl;
    }

    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>85)
    {
        cout<<"A"<<endl;
    }
    else if(marks>75)
    {
        cout<<"B"<<endl;
    }
    else if(marks>65)
    {
        cout<<"C"<<endl;
    }
    else
    {
        cout<<"D"<<endl;
    }

    return 0;
}