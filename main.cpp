#include <iostream>

int Sum(int* array, int row, int col)
{
	int sum{};
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum += *array++;
		}
	}
	
	return sum;
}


int main()
{
	int array1[3]{ 7, 8, 9 };

	int array2[2][3]{
		{1, 2, 3},
		{4, 5, 6}
	};


	std::cout << Sum(&array1[0], 1, 3) << std::endl;

	std::cout << Sum(&array2[0][0], 2, 3) << std::endl;



	int x{ 1 };
	struct MyData
	{
		int x;
		int y;
	};

	MyData d{ 1, 2 };		// 구조체도 메모리상으로는 일렬로 나열되어있다.

	std::cout << Sum(&x, 1, 1) << std::endl;
	std::cout << Sum(&d.x, 1, 2) << std::endl;
}

// 모두 각각의 type이 int로만 같다면,
// 이렇게 다양한 응용이 가능해진다.