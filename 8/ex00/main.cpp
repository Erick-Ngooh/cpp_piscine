#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <exception>

const char *NoMatch::what() const throw()
{
	return ("\033[1;31mNo occurence found\033[0m");
}

int main(void)
{
	std::vector<int> v1(10, 0);

	v1.push_back(7);
	v1.push_back(21);
	v1.push_back(17);
	v1.push_back(14);

	try
	{
		std::vector<int>::iterator it;
		std::vector<int>::iterator ite = v1.begin() + v1.size();
		int	value = 6;

		for (it = v1.begin(); it != ite; it++)
			std::cout << *it << " ";
		std::cout << std::endl << std::endl << "Trying to find " << value << std::endl;
		it = easyfind(v1, value);
		std::cout << "\033[1;33mOccurence found: \033[0m" << *it << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
		try
		{
			std::vector<int>::iterator it;
			int	value = 21;

			std::cout << std::endl << "Trying to find " << value << std::endl;
			it = easyfind(v1, value);
			std::cout << "\033[1;33mOccurence found: \033[0m" << *it << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
