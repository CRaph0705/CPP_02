/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:30:01 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/27 10:42:24 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractionnal_part = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = f;
	return ;
}
Fixed::Fixed(int input)
{
	std::cout << "Int constructor called." << std::endl;
	this->_value = input << this->_fractionnal_part;

	return ;
}

Fixed::Fixed(float input)
{
	std::cout << "Float constructor called." << std::endl;
	this->_value = roundf(input * (1 << this->_fractionnal_part)); // << 8 equivaut a multiplier par 256
	return ;
}

Fixed	&Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

int	Fixed::toInt ( void )const
{
	return (this-> _value >> this->_fractionnal_part); // revient a diviser par 256 pour afficher a valeur proche de l'input de depart
}

float	Fixed::toFloat ( void )const
{
	return ((float)this->_value / (float)(1 << this->_fractionnal_part));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
	return ;
}
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

// std::ostream	&operator<<(std::ostream &stream, Fixed const &fixed)
// {
// 	stream << fixed.toFloat();
// 	return (stream);
// }