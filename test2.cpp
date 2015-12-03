#include <iostream>

int main()
{
	const char* g_test[] = {"aa", "bbb", "cccc"};
	std::cout << "sizeof it = " << sizeof(g_test) << std::endl;
	return 0;
}

