/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:58:38 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/27 15:07:56 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractionnal_part = 8;

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called." << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(const Fixed &f)
{
	// std::cout << "Copy constructor called." << std::endl;
	*this = f;
	return ;
}
Fixed::Fixed(int input)
{
	// std::cout << "Int constructor called." << std::endl;
	this->_value = input << this->_fractionnal_part;

	return ;
}

Fixed::Fixed(float input)
{
	// std::cout << "Float constructor called." << std::endl;
	this->_value = roundf(input * (1 << this->_fractionnal_part)); // << 8 equivaut a multiplier par 256
	return ;
}

Fixed	&Fixed::operator=(const Fixed& f)
{
	// std::cout << "Copy assignment operator called." << std::endl;
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
	// std::cout << "Destructor called." << std::endl;
	return ;
}
int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
/* ========================================================================= */

bool	Fixed::operator>(const Fixed &fixed)
{
	return (this->_value > fixed._value);
}

bool	Fixed::operator<(const Fixed &fixed)
{
	return (this->_value < fixed._value);
}

bool	Fixed::operator>=(const Fixed &fixed)
{
	return (this->_value >= fixed._value);
}

bool	Fixed::operator<=(const Fixed &fixed)
{
	return (this->_value <= fixed._value);
}

bool	Fixed::operator==(const Fixed &fixed)
{
	return (this->_value == fixed._value);
}

bool	Fixed::operator!=(const Fixed &fixed)
{
	return (this->_value != fixed._value);
}

/* ========================================================================= */

Fixed	Fixed::operator+(const Fixed &fixed)
{
	return (this->toFloat() + fixed.toFloat());
}
Fixed	Fixed::operator-(const Fixed &fixed)
{
	return (this->toFloat() - fixed.toFloat());
}
Fixed	Fixed::operator*(const Fixed &fixed)
{
	return (this->toFloat() * fixed.toFloat());
}
Fixed	Fixed::operator/(const Fixed &fixed)
{
	return (this->toFloat() / fixed.toFloat());
}

/* ========================================================================= */

Fixed	&Fixed::operator--() // --i
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int fixed) // i--
{
	Fixed	tmp;
	(void)fixed;
	tmp = *this;
	--*this;
	return (tmp);
}

Fixed	&Fixed::operator++() // ++i
{
	this->_value+=1;
	return (*this);
}

Fixed	Fixed::operator++(int fixed) // i++
{
	Fixed	tmp;
	(void)fixed;
	tmp = *this;
	++*this;
	return (tmp);
}

/* ========================================================================= */

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	//
	return (f1._value > f2._value ? f2 : f1);
}
	
Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	//
	return (f1._value > f2._value ? f1 : f2);
}

Fixed	const &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	//
	return (f1._value > f2._value ? f2 : f1);
}
	
Fixed	const &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	//
	return (f1._value > f2._value ? f1 : f2);
}

/* ========================================================================= */
std::ostream& operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
