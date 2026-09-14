#include <iostream>
using namespace std;

class book
{
    private:
        int bookid;
        int pages;
        float price;

    public:
      void set(int id, int page, float prices)
      {
        bookid = id;
        pages= page;
        price = prices;
      }
      void show()
      {
        cout<<"BOOK ID : "<<bookid<<endl;
        cout<<"Pages : "<<pages<<endl;
        cout<<"price : "<<price<<endl;
      }
};
int main()
{
    book b1;

    b1.set(1077 , 300 , 1500.00);
    b1.show();
    return 0;
}