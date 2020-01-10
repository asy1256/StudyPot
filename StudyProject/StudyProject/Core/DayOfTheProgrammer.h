#pragma once
#include "Process.h"

class DOTP : public Process
{
public:
	bool Update() override { return Run(); }
protected:
	bool Run() override;
};