#include <iostream>

int main()
{
		int age;

		std::cout << "���̸� �Է��ϼ���. ";
		std::cin >> age;

		std::string result; 

	if (1 <= age && age <= 7 )
	{
		result = "����";
	}
	else if (age <= 13)
	{
		result = "�ʵ��л�";
	}
	else if (age <= 16)
	{
		result = "���л�";
	}
	else if (age <= 19)
	{
		result = "����л�";
	}
	else if (age <= 199 )
	{
		result = "����";
	}
	else
	{
		result = "���̰� �ʹ� �����ϴ�..!";
	}

	  std::cout << result;

	return 0;
}
