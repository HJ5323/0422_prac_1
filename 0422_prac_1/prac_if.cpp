#include <iostream>

int main()
{
		int age;

		std::cout << "나이를 입력하세요. ";
		std::cin >> age;

		std::string result; 

	if (1 <= age && age <= 7 )
	{
		result = "유아";
	}
	else if (age <= 13)
	{
		result = "초등학생";
	}
	else if (age <= 16)
	{
		result = "중학생";
	}
	else if (age <= 19)
	{
		result = "고등학생";
	}
	else if (age <= 199 )
	{
		result = "성인";
	}
	else
	{
		result = "나이가 너무 많습니다..!";
	}

	  std::cout << result;

	return 0;
}
