#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Soft
{
protected:
	string name;
	string manufacture;
public:
	Soft();
	Soft(string name, string manufacture);
	virtual ~Soft();

	void setName(string name);
	void setManufacture(string manufacture);

	string getName()const;
	string getManufacture()const;

	virtual void showInfo() const = 0;
	virtual bool isAvailable() const = 0;
	virtual void load(ifstream& file) = 0;

};

