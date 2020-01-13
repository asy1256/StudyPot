#pragma once
#include "Execute.h"
//#include "stdafx.h"

class Category : public Execute
{
public:
	bool Update() override;
private:
	//std::vector<Execute*> CaseList;
protected:
	bool Run() override;
};