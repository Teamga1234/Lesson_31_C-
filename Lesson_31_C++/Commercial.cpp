#include "Commercial.h"

Commercial::Commercial()
{
    price = 0;
}

Commercial::Commercial(string name, string manufacture, Date install, int days, float price):
    Shareware(name, manufacture, install, days)
{
    this->price = price;
}

void Commercial::setPrice(float price)
{
    this->price = price;

}

float Commercial::getPrice() const
{
    return price;
}

void Commercial::showInfo() const
{
    cout << "Type: Commercial\n" << "Name: " << name << "\nManufacture : " << manufacture << endl;
    cout << "Date: " << install << endl;
    cout << "Days: " << days << endl;
    cout << "Price: " << price << endl;
    cout << "Is available: " << (isAvailable() ? "yes" : "no") << endl;
}
