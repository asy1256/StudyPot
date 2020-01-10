#include "stdafx.h"
#include "../Core/DayOfTheProgrammer.h"

void WaitAndClear(const DWORD& time);
bool SelectCategory(const int& i);

int main()
{
	bool ShutDown = false;

	int selectnum = 0;
	while (true)
	{
		std::cout << "원하는 항목을 선택해 주세요." << std::endl;
		std::cout << "1. 알고리즘\t2. 자료구조\t3. 종료" << std::endl;

		std::cin >> selectnum;
		ShutDown = SelectCategory(selectnum);

		if (ShutDown == true) break;
	}

	WaitAndClear(500);

	system("pause");
	return 0;
}

void WaitAndClear(const DWORD& time)
{
	Sleep(time);
	system("cls");
}

bool SelectCategory(const int& i)
{
	switch (i)
	{
		case 1:
		{
			std::cout << "알고리즘을 선택하셨습니다." << std::endl;
			WaitAndClear(500);
			
			break;
		}
		case 3:
		{
			std::cout << "프로그램을 종료합니다." << std::endl;
			return true;
		}
		default:
		{
			std::cout << "목록에 없습니다. 다시 선택해 주세요." << std::endl;
			WaitAndClear(500);

			break;
		}
	}

	return false;
}