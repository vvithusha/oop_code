#include <iostream>
using namespace std;
int main()
{
    //prime number
    int num1,num2;

    cout<<"Enter two number:";
    bool prime1=true,prime2=true;

    cin>>num1>>num2;

    if(num1<=1)
    {
        prime1 = false;
    }
    else{
    for(int i=2; i<num1 ; i++)
    {
       
        if(num1%i == 0)
        {
            prime1 = false;
            break;
        }
       
       
    }}


    if(num2<=1)
    {
        prime2=false;
    }
    else{
    for(int j=2; j<num2 ; j++)
    {
        if(num2%j==0)
        {
            prime2=false;
        }
    }
}
    if((prime1 ) && (prime2))
    {
        cout<<"both num1 and num2 are prime"<<endl;
    }
    else if((prime1)||(prime2))
    {
        cout<<"only one is prime number"<<endl;
    }
    else
    {
        cout<<"both are not prime"<<endl;
    }
    return 0;
}