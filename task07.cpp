#include <iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<endl;
    }

    //print the factorial of the number using for loop

    int fact =1;
    for(int j=n ; j>=1 ; j--)
    {
        fact = fact*j;     
    }
    cout<<"factorial of "<<n<<" = "<<fact<<endl;
    return 0;
}