#include <iostream>
using namespace std;

class book
{
   private:
     static int count;
     int bookid;
     int pages;
     float price;

   public:
     book(){
        count++;
     }
     void setbook(int id, int page, float prices)
     {
         bookid = id;
         pages = page;
         price = prices;
     }

     void showbook()
     {
        cout<<"BOOK ID : "<<bookid<<endl;
        cout<<"pAGES   : "<<pages<<endl;
        cout<<"PRICE   : "<<price<<endl;
        cout<<"Number of copies : "<<count<<endl;
     }

};

int book :: count=0;         
int main()
{
    book b1;
    b1.setbook(6727 , 300 , 5000);
    b1.showbook();
    return 0;
}