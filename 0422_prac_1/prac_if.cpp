#include <iostream>

int main()
{
		int age;

		std::cout << "������ �Է��ϼ���. ";
		std::cin >> age;


	if (1 <= age && age <= 7 )
	{
		std::cout << "����";
	}
	else if (age <= 13)
	{
		std::cout << "�ʵ��л�";
	}
	else if (age <= 16)
	{
		std::cout << "���л�";
	}
	else if (age <= 19)
	{
		std::cout << "����л�";
	}
	else if (age <= 199 )
	{
		std::cout << "����";
	}
	else
	{
		std::cout << "���̰� �ʹ� �����ϴ�..!";
	}

	return 0;
}
