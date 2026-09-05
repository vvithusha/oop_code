#include <iostream>
using namespace std;

struct book 
{
   int bookid;
   int numofcopies;
   float price; 
};

int main()
{
    book book1;
    book1.bookid = 101;
    book1.numofcopies = 32;
    book1.price = 2500.34;

    cout <<"bookid : "<<book1.bookid<<endl;
    cout <<"numof copies : "<<book1.numofcopies<<endl;
    cout <<"price : "<<book1.price<<endl;

    cout<<endl;
    book book2= book1;  //assgnment is posible

    cout<<"bookid : "<<book2.bookid<<endl;
    cout<<"num of copies :"<<book2.numofcopies<<endl;
    cout<<"price : "<<book2.price<<endl;

    book book3;
    book3.price= book1.price+book2.price;
    cout<<"\n\nprice : "<<book3.price;

    return 0;
    
}
