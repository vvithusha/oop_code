#include <iostream>
using namespace std;

class Distance
{
    private:
      int feet;
      float inches;

    public:
      void set(int ft, float in)   // fixed: float, not int
      {
        feet = ft;
        inches = in;
      }
      void get()
      {
        cout << "Enter the feet : ";
        cin >> feet;
        cout << "Enter the inches : ";
        cin >> inches;
      }
      void show()
      {
        cout << feet << " " << inches << endl;
      }
};

int main()
{
    Distance d1;

    d1.set(13, 25.4);
    d1.show();     // shows: 13 25.4  (values from set())

    d1.get();       // now ask user to enter new values
    d1.show();      // shows whatever the user typed

    return 0;
}