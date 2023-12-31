/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <student.1337.ma>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:31:44 by hoigag            #+#    #+#             */
/*   Updated: 2024/01/07 17:25:11 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	try
	{
		std::string input = concat(argv + 1);
		PmergeMe pmm(input);
		pmm.parseString();
		// pmm.printContainer(pmm.getNumbers());
		pmm.forwardRecursion();
		pmm.printContainer(pmm.getNumbers());
		std::cout << "comparaisons: " << i << std::endl;
		// pmm.printContainer(pmm.getNumbers());
		// pmm.printNumbers();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
