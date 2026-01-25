#include <iostream>
using namespace std;

class Car{
    int year;
    double mailage;
    public:
    string brand;
    string modle;
    void set_car(int year,double mailage, string brand,string modle);
    void get_car();

};

int main(){
    Car car;
    car.set_car(2012,55,"BMW","SKYSCRAPPER");
    car.get_car ();
    return 0;
}

void Car::set_car(int year,double mailage, string brand,string modle)
{
    this -> year = year;
    this -> mailage = mailage;
    this -> brand = brand;
    this -> modle = modle;
}

void Car:: get_car()
{
    cout << this -> year <<endl;
    cout << this -> mailage <<endl;
    cout << this -> brand <<endl;
    cout << this -> modle <<endl;
}