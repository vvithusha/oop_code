#include <iostream>
using namespace std;

int add (int a)
{
    a = a  +10;
    return a;
}
int main()
{ 
    int a=90;
    cout<<"a : "<<a <<endl;
    add(a);
    cout <<"a : "<<a<<endl;
    return 0;
}