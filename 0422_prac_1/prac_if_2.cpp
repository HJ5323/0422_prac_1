#include <iostream>

int main()
{
	std::string name;

	std::cout << "이름을 입력하세요. ";
	std::cin >> name;

	std::string result;

	if (name == "홍길동")
	{
		result = "남자";
	}
	else if (name == "성춘향")
	{
		result = "여자";
	}
	else
	{
		result = "모르겠어요.";
	}

	std::cout << result;

	return 0;
}
