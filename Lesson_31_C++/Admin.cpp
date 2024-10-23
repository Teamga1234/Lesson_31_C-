#include "Admin.h"

Admin::Admin()
{
	ifstream file("info-soft.txt");
	if (file.is_open())
	{
		string type = "";
		while (!file.eof())
		{
			getline(file, type);
			if (type == "Free")
			{

			}
			else if (type == "ShareWare")
			{

			}
			else if (type == "Commercial")
			{


			}
		}
		file.close();
	}
	else
		cout << "\nerror\n";
}

Admin::~Admin()
{
	for (int i = 0; i < admin.size(); i++)
	{
		delete admin[i];
	}
}

void Admin::addSoft(Soft* obj)
{
	if (obj != nullptr)
	{
		admin.push_back(obj);
	}
}

void Admin::showList() const
{
	for (int i = 0; i < admin.size(); i++)
	{
		cout << "\tsoft #" << i + 1 << endl;
		admin[i]->showInfo();
		cout << endl;
	}
}
