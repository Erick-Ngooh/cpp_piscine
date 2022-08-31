#include "easyfind.hpp"
#include <exception>

int main(void)
{
	std::vector<int> v1(100, 42);

	v1.push_back(7);
	v1.push_back(21);
	v1.push_back(17);
	v1.push_back(14);

	try
	{
		std::vector<int>::iterator it;
		it = easyfind(v1, 21);
		std::cout << "Occurence found: " << *it << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
