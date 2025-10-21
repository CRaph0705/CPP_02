/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:56:40 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/21 16:11:29 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Fixed {
// https://en.wikipedia.org/wiki/Fixed-point_arithmetic
private :
	int	_part;
	const static int _fractionnal_part;

public :
	//default construct
	Fixed(void);
	
	//cpy construct
	Fixed(const Fixed& f);

	//operateur d'affectation
	// A::operator=(const A&)
	Fixed &operator=(const Fixed &f); // on definit un comportement a l'operateur =
	
	//destructor
	~Fixed(void);

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
};