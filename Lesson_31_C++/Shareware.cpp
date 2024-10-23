#include "Shareware.h"

Shareware::Shareware()
{
    days = 0;

}

Shareware::Shareware(string name, string manufacture, Date install, int days):
    Soft( name,  manufacture)
{
    this->install = install;
    this->days = days;
}

void Shareware::setInstall(Date install)
{
    this->install = install;
}

void Shareware::setDays(int days)
{
    this->days = days;
}

Date Shareware::getInstall() const
{
    return install;
}

int Shareware::getDays() const
{
    return days;
}

void Shareware::showInfo() const
{
    cout <<"Type: Shareware\n" << "Name: " << name << "\nManufacture : " << manufacture << endl;
    cout << "Date: " << install << endl;
    cout << "Days: " << days << endl;
    cout << "Is available: " << (isAvailable() ? "yes" : "no") << endl;
}

bool Shareware::isAvailable() const
{
    return (install + days) >= Date();
}
