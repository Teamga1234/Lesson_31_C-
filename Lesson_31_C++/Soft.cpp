#include "Soft.h"

Soft::Soft()
{
    name = "none";
    manufacture = "none";
}

Soft::Soft(string name, string manufacture)
{
    this->name = name;
    this->manufacture = manufacture;
}

Soft::~Soft()
{
}

void Soft::setName(string name)
{
    this->name = name;
}

void Soft::setManufacture(string manufacture)
{
    this->manufacture = manufacture;
}

string Soft::getName() const
{
    return name;
}

string Soft::getManufacture() const
{
    return manufacture;
}
