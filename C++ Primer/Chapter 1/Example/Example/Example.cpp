// Example.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "hello world!\n";

	//std::cout << "please enter tow numbers:" << std::endl;
	//int v1 = 0, v2 = 0;
	//std::cin >> v1 >> v2;
	//std::cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

	//int sum = 0, value = 50;
	//while (value <= 100)
	//{
	//	sum += value;
	//	++value;
	//
	//}
	//std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

	//int value = 10;
	//while (value >= 0)
	//{
	//	std::cout << value << std::endl;
	//	--value;
	//}

	//int value_in1 = 0, value_in2 = 0;
	//int value_min = 0, value_max = 0;

	//std::cout << "Please input two nums: " << std::endl;
	//std::cin >> value_in1 >> value_in2;

	//if (value_in1 <= value_in2)
	//{
	//	value_min = value_in1;
	//	value_max = value_in2;
	//}
	//else
	//{
	//	value_min = value_in2;
	//	value_max = value_in1;
	//}

	//while (value_max >= value_min)
	//{
	//	std::cout << value_max << std::endl;
	//	--value_max;
	//}

	//std::cout << value_in1 << " " << value_in2 << " " << value_min << " " << value_max << " "  << std::endl;

	//int sum = 0, value = 0;
	//while (std::cin >> value)
	//{
	//	sum += value;
	//}
	//std::cout << "sum is: " << sum << std::endl;

	// 问题就是 如果后续再来一个跟前边相同的数字，没法将出现次数再次加到前边去。
	int curValue = 0, value = 0;
	if (std::cin >> curValue)
	{
		int count_curValue = 1;
		while (std::cin >> value)
		{
			if (curValue == value)
			{
				count_curValue++;
			}
			else  //说明 接下来的这个数已经不是原来的数了
			{
				std::cout << "The number " << curValue << " occurs " << count_curValue << " times " << std::endl;

				curValue = value;
				count_curValue = 1;
			}

		}
		std::cout << "The number " << curValue << " occurs " << count_curValue << " times " << std::endl;
	}

	return 0;


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
