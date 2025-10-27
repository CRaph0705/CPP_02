/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:24:04 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/27 13:53:25 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <cfloat>

class Fixed {
private :
	int	_value;
	const static int _fractionnal_part;

public :
	Fixed(void);
	Fixed(const Fixed& f);
	Fixed(int input);
	Fixed(float input);
	~Fixed(void);
	
	int	toInt ( void )const;
	float	toFloat ( void )const;

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	static Fixed	min(Fixed &f1, Fixed &f2);
	static Fixed	max(Fixed &f1, Fixed &f2);

	static Fixed	min(const Fixed &f1, const Fixed &f2);
	static Fixed	max(const Fixed &f1, const Fixed &f2);
	
	//surcharge d'operateurs :
	/* assignation */
	//operator =
	Fixed &operator=(const Fixed &f);

	/* comparaison : */
	//operator >
	bool operator>(const Fixed &f);
	//operator <
	bool operator<(const Fixed &f);
	//operator >=
	bool operator>=(const Fixed &f);
	//operator <=
	bool operator<=(const Fixed &f);
	//operator ==
	bool operator==(const Fixed &f);
	//operator !=
	bool operator!=(const Fixed &f);

	/* arithmetique */
	//operator +
	Fixed operator+(const Fixed &f);
	//operator -
	Fixed operator-(const Fixed &f);
	//operator *
	Fixed operator*(const Fixed &f);
	//operator /
	Fixed operator/(const Fixed &f);

	/* incrementation, decrementation, pre/post */
	// --
	Fixed &operator--();
	// --
	Fixed operator--(int fixed);
	// ++
	Fixed &operator++();
	// ++
	Fixed operator++(int fixed);
};


// ici on pourrait ajouter le mot clef friend avant la declaration de la fonction pour l'avoir dans la class
std::ostream& operator<<(std::ostream &stream, const Fixed &fixed);
