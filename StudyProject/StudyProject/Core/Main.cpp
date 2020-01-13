#include "stdafx.h"
#include "Platform.h"

int main()
{
	Platform plf;

	plf.RunPrograme();

	WaitAndClear(500);
	system("pause");
	return 0;
}

// From stdafx.h
void WaitAndClear(const DWORD& time)
{
	Sleep(time);
	system("cls");
}