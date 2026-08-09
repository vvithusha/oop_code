#include <iostream>
using namespace std;
int main()
{
    int num;
    //useing do while loop to get the input from user until user enters 0
    do{

        cout<<"Enter a number : ";
        cin>>num;
        cout<<"num = "<<num<<endl;

    }while(num!=0);

   //useing for loop to print the numbers from 1 to 10
   int i;
   for(;;)
   {
     cout<<"Enter a number : ";
     cin>>i;
     cout<<i<<endl;

     if(i==0)
     {
        break;
     }
   }

   //useing while loop to print the numbers from 1 to 10

   int j=0;
   while(true)
   {
      cout<<"Enter a number : ";
      cin>>j;
      cout<<j<<endl;
      if(j==0)
      {
        break;
      }
   }
    return 0;
}