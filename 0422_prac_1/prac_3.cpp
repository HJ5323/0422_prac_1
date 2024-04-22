#include <iostream>

int main()
{
	int num1 = 5;
	int num2 = 10;
	int num3 = 15;
	bool result = false;

	// true? false?
	// && AND -> true and true == true
	// || OR -> true || false == true
	// ! NOT -> !true = false, !false = true

		// false
		result = num1 < num2;

		// ture
		result = num1 != num2;

		result = (num1 > num2) && (num1 > num3);

		// 10의 배수인지 체크하기

		int num44 = 60;
		(num4 % 10) == 0; // 10으로 딱 나눠짐

		int loop_count = 5;
		int input = 993321421321;

		// (input % loop_count) == 0~4;

		loop_count++;
		// ++loop_count; -> 잘 안쓴다.

		loop_count--;
		// --loop_count;

		bool condition = false; // -> if () 안에 condition 쓰면 됨

		if (true)
		{
			std::cout << "숫자1이 숫자2보다 크다";
		}
		else if (num1 > num3)
		{
			std::cout << "숫자1이 숫자2보다 작거나 같고,"
				<< "숫자3보다 크다";
		}
		else
		{
			std::cout << "숫자1이 가장 작거나 숫자2 또는 숫자3과 같다"
		}


		// true -> 무조건 작동, false -> 작동 X

	return 0;
}