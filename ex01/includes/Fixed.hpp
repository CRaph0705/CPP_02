/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:29:31 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/23 09:45:42 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
private :
	int	_value;
	const static int _fractionnal_part;

public :
	Fixed(void);
	Fixed(const Fixed& f);
	Fixed(int input);
	Fixed(float input);
	Fixed &operator=(const Fixed &f);
	~Fixed(void);
	
	int	toInt ( void )const;
	float	toFloat ( void )const;

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
};
// ici on pourrait ajouter le mot clef friend avant la declaration de la fonction pour l'avoir dans la class
std::ostream& operator<<(std::ostream &stream, const Fixed &fixed);
