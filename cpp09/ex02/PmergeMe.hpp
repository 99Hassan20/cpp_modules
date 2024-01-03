/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:31:53 by hoigag            #+#    #+#             */
/*   Updated: 2024/01/03 16:15:52 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <vector>

class PmergeMe
{
	public:
		PmergeMe(std::string input);
		void parseString();
		void printVector(std::vector<int> numbers);
		void printMyContainer();
		void mergeInsertSmthSmth();
		void marrySingles();
		// ~PmergeMe();
		// PmergeMe(const PmergeMe& other);
		// PmergeMe& operator=(const PmergeMe& other);
	private:
		std::string input;
		std::vector< std::vector<int> > numbers;
		std::vector<int> remain;
};
std::string concat(char **args);


#endif
