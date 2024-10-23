#pragma once
#include "Shareware.h"
class Commercial : public Shareware
{
protected:
	float price;
public:
	Commercial();
	Commercial(string name, string manufacture, Date install
		, int days, float price);
	
	void setPrice(float price);
	float getPrice()const;

	void showInfo()const override;
};

