/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:23:52 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/27 14:15:44 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Fixed.hpp>
#include <cfloat>

int main( void ) {
	// Fixed a((float)42.42);
	Fixed	a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << "debug\n" << Fixed(5.05f).toFloat() << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// std::cout << FLT_EPSILON << std::endl;
	return 0;
}