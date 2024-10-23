#pragma once
#include "Soft.h"
#include "Date.h"
class Shareware : public Soft
{
protected:
	Date install;
	int days;
public:
	Shareware();
	Shareware(string name, string manufacture, Date install
		, int days);

	void setInstall(Date install);
	void setDays(int days);

	Date getInstall()const;
	int getDays()const;
	void showInfo()const override;
	bool isAvailable() const override;

	void load(ifstream& file) override;
};

