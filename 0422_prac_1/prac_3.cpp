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

		// 10�� ������� üũ�ϱ�

		int num44 = 60;
		(num4 % 10) == 0; // 10���� �� ������

		int loop_count = 5;
		int input = 993321421321;

		// (input % loop_count) == 0~4;

		loop_count++;
		// ++loop_count; -> �� �Ⱦ���.

		loop_count--;
		// --loop_count;

		bool condition = false; // -> if () �ȿ� condition ���� ��

		if (true)
		{
			std::cout << "����1�� ����2���� ũ��";
		}
		else if (num1 > num3)
		{
			std::cout << "����1�� ����2���� �۰ų� ����,"
				<< "����3���� ũ��";
		}
		else
		{
			std::cout << "����1�� ���� �۰ų� ����2 �Ǵ� ����3�� ����"
		}


		// true -> ������ �۵�, false -> �۵� X

	return 0;
}