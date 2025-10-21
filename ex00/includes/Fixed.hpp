/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:56:40 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/20 17:50:34 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {

private :
	int	part;

public :
	//default construct
	Fixed(void);
	//cpy construct
	Fixed(const Fixed&);
	//destructor
	~Fixed(void);
};