#include <iostream>
using namespace std;

class book
{
   private:
     int price;


   public:
     void func()
     {
        price = 100;
     }
     void func() const
     {
        cout<<price;
     }
     void increase_price(const book&) const;
};

void book::increase_price(const book& b) const
{
    book b1;
    b1.price =9000;
    cout<<b.price;
}
int main()
{
    book b1;
    b1.func();
    b1.increase_price(b1);
    return 0;
}