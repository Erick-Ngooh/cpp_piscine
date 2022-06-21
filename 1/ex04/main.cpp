/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:13:50 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/21 12:29:47 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	std::string		line;
	std::string		buffer;
	std::ifstream	file(av[1]);
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			buffer += line;
			buffer += "\n";
		}
		file.close();
		std::cout << buffer << std::endl;
	}
	else
		std::cout << "Unable to open file" << std::endl;
}
