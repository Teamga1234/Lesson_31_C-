#include "Free_soft.h"

Free_soft::Free_soft()
{
    name = "none";
    manufacture = "none";
}

Free_soft::Free_soft(string name, string manufacture)
{
    this->name = name;
    this->manufacture = manufacture;
}

void Free_soft::showInfo() const
{
    cout << "Type: free soft \nName: " << name << "\nManufacture: " << manufacture << endl;
    cout << "Is available: " << (isAvailable()?"yes": "no") << endl;

}

bool Free_soft::isAvailable() const
{
    return true;
}

void Free_soft::load(ifstream& file)
{
    getline(file, name);
    getline(file, manufacture);

}
