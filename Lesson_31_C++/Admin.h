#pragma once
#include "Shareware.h"
#include "Free_soft.h"
#include "Commercial.h"
#include <vector>
#include <algorithm>

class Admin
{
	vector<Soft*> admin;
public:
	Admin();
	~Admin();

	void addSoft(Soft* obj);
	void showList()const;
};

