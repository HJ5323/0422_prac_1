#include <iostream>

int main()
{
		int age;

		std::cout << "나이을 입력하세요. ";
		std::cin >> age;


	if (1 <= age && age <= 7 )
	{
		std::cout << "유아";
	}
	else if (age <= 13)
	{
		std::cout << "초등학생";
	}
	else if (age <= 16)
	{
		std::cout << "중학생";
	}
	else if (age <= 19)
	{
		std::cout << "고등학생";
	}
	else if (age <= 199 )
	{
		std::cout << "성인";
	}
	else
	{
		std::cout << "나이가 너무 많습니다..!";
	}

	return 0;
}
