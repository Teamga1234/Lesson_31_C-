#include "Admin.h"

Admin::Admin()
{
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
