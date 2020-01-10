#pragma once

class Execute
{
public:
	virtual bool Update() = 0;
protected:
	virtual bool Run() = 0;
};
