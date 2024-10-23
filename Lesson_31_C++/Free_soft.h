#pragma once
#include "Soft.h"
class Free_soft : public Soft
{
public:
	Free_soft();
	Free_soft(string name, string manufacture);

	void showInfo() const override;
	bool isAvailable() const override;

};

