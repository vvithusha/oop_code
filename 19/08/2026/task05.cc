#include <iostream>
using namespace std;

class Distance                              //English Distance class
{
    private:
        int feet;
        float inches;
    public:                                 //constructor (no args)
        Distance() : feet(0), inches(0.0)
        {   }                               //constructor (two args)
        
        Distance(int ft, float in) : feet(ft), inches(in)
        {   }
        void getdist()                      //get length from user
        {
            cout << "\nEnter feet: ";   cin >> feet;
            cout << "Enter inches: ";   cin >> inches;
        }
        void showdist() const               //display distance
        { cout << feet << "\'-" << inches << "\"" ; }
        
        bool operator < (Distance) const  //compare distances
        {
            float bf1 = feet + inches/12;
            float bf2 = d2.feet + d2.inches/12;
            return (bf1 < bf2) ? true : false;
        }
        
};

//bool Distance::operator < (Distance d2) const   //return the sum



int main()
{
    Distance d1,d2;
    if(d2<d1)
    {
        cout<<"c1 is bigest";
    }
    else
    {
        cout<<"c2 id big";
    }
    return 0;
}