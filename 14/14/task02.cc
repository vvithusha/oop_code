#include <iostream>
using namespace std;

class Distance
{
    private:
      int feet;
      float inches;
    public:
      Distance():feet(0),inches(0.0){}
      Distance(int ft,float in): feet(ft),inches(in){}

      void getdistance()
      {
        cout<<"Enter the feet : ";cin>>feet;
        cout<<"Enter the inches : ";cin>>inches;
      }
      int  showlist()
      {
        cout<<"feet : "<<feet<<"  inches : "<<inches<<endl;
        return 1;
      }
      Distance add_dis(Distance d2)
      {
         int f =feet+d2.feet;
         int i = inches + d2.inches;

         if(i>=12.0)
         {
            i -= 12.0;
            f +=1;
         }
         return Distance(f,i);
      }
};
int main()
{
    Distance dist1(11,15.9);
    Distance dist2(dist1);
    Distance dist3 = dist1;

    cout<<"\n dist1 : "<<dist1.showlist();
    cout<<"\n dist2 : ";dist2.showlist();
    cout<<"\n dist3 : ";dist3.showlist();
    cout<<endl;

    return 0;
}