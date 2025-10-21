/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:56:43 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/21 15:15:47 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called." << std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed& f)
{
	std::cout << "Assignment operator called." << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
	return ;
}
