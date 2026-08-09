#include <iostream>
using namespace std;
int main()
{
    for(int i=0 ; i<=10 ; i++)
    {
        cout<<++i<<endl;
    }

    cout<<"--------square values-----------"<<endl;
    for(int j=0 ; j<15 ; j++)
    {
        cout<<j << " * " << j << " = " <<j*j<<endl;
    }
    return 0;
}