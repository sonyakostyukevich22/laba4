#include <iostream>

void f()
{
	int m = 50;

	for (int i = 0; i < 1000; i++)
	{
		if (i / 100 >= 1 && i / 100 <= 10)
		{
			std::cout << "bhdc" << std::endl;
			if (i % 200 != 0)
			{
				std::cout << " " << i / m;
			}
		}

	}
}

int main()
{
	f();
	//int i;
	//std::cout << "chislo ot 1 do 1000" << std::endl;
	//std::cin >> i;
	system("pause");
	return 0;
}