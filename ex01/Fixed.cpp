/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:55:32 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/02/08 11:00:45 by ilchahbi         ###   ########.fr       */
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
    return (this->n);
}

int Fixed::toInt() const
{
    return (this->n >> s);
}

float Fixed::toFloat() const
{
    return ((float)this->n / (1 << s));
}

Fixed::~Fixed()
{
        std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
    n = val << s;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
    n = roundf(val * (1 << s));
}
