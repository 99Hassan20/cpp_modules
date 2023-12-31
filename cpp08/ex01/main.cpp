/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:43:23 by hoigag            #+#    #+#             */
/*   Updated: 2023/12/05 18:24:51 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(15);
		sp.fillSpan(-100, 100);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest  span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{ 
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
