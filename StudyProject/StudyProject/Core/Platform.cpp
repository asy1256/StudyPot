#include "Platform.h"
#include "Category.h"

Platform::Platform()
{
	Init();
}

Platform::~Platform()
{
	Destroy();
}

void Platform::RunPrograme()
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
}

void Platform::Init()
{
	Algorithm = new Category();
}

void Platform::Destroy()
{
	delete Algorithm;
}

bool Platform::SelectCategory(const int& i)
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
