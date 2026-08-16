#include <iostream>
using namespace std;
int main()
{
    int row;
    char symbol;

    cout<<"Enter which symbol you want : ";
    cin>>symbol;

    cout<<"Enter how much rows you want to print :";
    cin>>row;

    for(int i=1 ; i<=row ; i++)
    {
        for(int j=1 ; j<=i ; j++)
           cout<<symbol;
        cout<<endl;
    }
    return 0;
}