#pragma once
#include "Execute.h"
#include "stdafx.h"

class Process :	public Execute
{
public:
	Process();
	~Process();

	std::string name;
};

