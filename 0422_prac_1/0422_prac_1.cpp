// 
// 작성자 : PHJ
// 작성일자 : 2024. 04. 22.
//
// main 문이 있는 파일

	// main 함수 연습
	// 1. 숫자를 입력해주세요: <-- 문자열 출력
	// 2. 사용자에서 정수형 값을 입력받기
	// 3. 입력 받은 값을 정수형 변수에 저장하기
#include <iostream>

int main()
{
	std::cout << "숫자를 입력해주세요: ";

	int num;

	std::cin >> num;
	std::cout << num;

	return 0;
}

//int main()
//{
//	std::cout << "숫자를 입력해주세요: ";
//
//	int num;
//
//	// 콘솔 문자 "입력"
//	std::cin >> num;
//	std::cout << num;
//
//	char word = 'A';
//	std::string MyName = "Jhon";
//	// 문자! = 문자열
//
//	return 0;
//}