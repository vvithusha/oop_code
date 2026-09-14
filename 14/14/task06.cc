#include <iostream>
using namespace std;

class tollbooth
{
  private:
   int count;
   unsigned int  n_vehicles;
   double total_money;
   double n_of_KM;
   int pre_1_km;

  public:
    tollbooth():n_vehicles(0),total_money(0),n_of_KM(0),pre_1_km(50){}   

    void payingvehicle()
    {
        n_vehicles++;
        cout<<"Enter the number of KM :";
        cin>>n_of_KM;
        total_money += (pre_1_km * n_of_KM);

    }

    void nopayvehicle()
    {
        n_vehicles++;
    }
    void display()
    {
        cout<<"number of vehicles: "<<n_vehicles<<endl;
        cout<<"Total Amount : "<<total_money<<endl;
    }
};
int main()
{
    tollbooth t1;

    char op=' ';
    while(op != 'q')
    {
        cout<<"paying_vehicle(p) , no_pay_vehicle(n) , stop(q) : ";
        cin>>op;
        if(op == 'p')
        {
            t1.payingvehicle();
         
        }
        else if(op == 'n')
        {
            t1.nopayvehicle();
           
        }
        else if(op == 'q')
        {
            cout<<"Stop!"<<endl;
            t1.display();
         

        }
        else{
            cout<<"Wrong input!"<<endl;
           }
    }
    return 0;
}