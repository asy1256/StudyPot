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
		std::cout << "���ϴ� �׸��� ������ �ּ���." << std::endl;
		std::cout << "1. �˰���\t2. �ڷᱸ��\t3. ����" << std::endl;

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
			std::cout << "�˰����� �����ϼ̽��ϴ�." << std::endl;
			WaitAndClear(500);
			
			break;
		}
		case 3:
		{
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			return true;
		}
		default:
		{
			std::cout << "��Ͽ� �����ϴ�. �ٽ� ������ �ּ���." << std::endl;
			WaitAndClear(500);

			break;
		}
	}

	return false;
}