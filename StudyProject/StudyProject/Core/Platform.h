#pragma once
#include "stdafx.h"
class Category;

class Platform
{
public:
	Platform();
	~Platform();

	void RunPrograme();
private:
	void Init();
	void Destroy();
	bool SelectCategory(const int& i);

	Category* Algorithm;
	Category* DataStructure;
};