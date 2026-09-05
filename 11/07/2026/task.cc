#include <iostream>
using namespace std;
int main()
{
   int num1,num2;
   bool prime1 = true , prime2 = true;
   cout<<"Enter the number : ";

   if(num1<=1)
   {
     prime1 = false;
   }
   else 
   {
     for(int i=2 ; i<=num1 ;i++)
     {
        if(num1%2==0)
        {
            prime1 = false;
        }
        else
        {
            prime1 = true;
        }
     }
   }

   if(num2<=1)
   {
     prime2 = false;
   }
   else
   {
     for(int j= 2 ; j<=num2 ; j++)
     {
        if(num2%j == 0)
        {
            prime2 = false;
        }
        else
        {
            prime2 = true;
        }
     }

   }

   if((prime1) && (prime2))
   {
     cout<<"Both are prime number :"<<endl;
   }
   else if((prime1) || (prime2))
   {
     cout<<""<<endl;
   }
   return 0;
}