#include <iostream>

int main()
{
	std::string name;

	std::cout << "�̸��� �Է��ϼ���. ";
	std::cin >> name;

	std::string result;

	if (name == "ȫ�浿")
	{
		result = "����";
	}
	else if (name == "������")
	{
		result = "����";
	}
	else
	{
		result = "�𸣰ھ��.";
	}

	std::cout << result;

	return 0;
}
