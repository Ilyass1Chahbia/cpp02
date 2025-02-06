/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:31:29 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/02/05 16:05:42 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed   &Fixed::operator=(const Fixed &other)
{
        std::cout << "Copy assignment operator called" << std::endl;
        if (this != &other)
        {
            this->n = other.getRawBits();
        }
        return (*this);
}

void    Fixed::setRawBits(int const val)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->n = val;
}

int Fixed::getRawBits() const
{
        std::cout << "getRawBits member function called" << std::endl;
        return (this->n);
}

Fixed::~Fixed()
{
        std::cout << "Destructor called" << std::endl;
}
