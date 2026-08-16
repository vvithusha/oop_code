#include <iostream>
using namespace std;
int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=i ;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   // cout<<endl;
    for(int k=1 ; k<=5  ; k++)
    {
        for(int l=5 ; l>=k ; l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}