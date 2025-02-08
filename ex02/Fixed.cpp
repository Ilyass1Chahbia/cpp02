/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 10:59:48 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/02/08 14:33:08 by ilchahbi         ###   ########.fr       */
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

int Fixed::operator>(const Fixed &other) const
{
    return (n > other.n);
}

int Fixed::operator<(const Fixed &other) const
{
    return (n < other.n);
}

int Fixed::operator>=(const Fixed &other) const
{
    if (n > other.n)
        return (1);
    if (n == other.n)
        return (1);
    return (0);
}

int Fixed::operator<=(const Fixed &other) const
{
    if (n < other.n)
        return (1);
    if (n == other.n)
        return (1);
    return (0);
}

int Fixed::operator==(const Fixed &other) const
{
    return (n == other.n);
}

int Fixed::operator!=(const Fixed &other) const
{
    return (n != other.n);
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
    if (other.n == 0)
    {
        std::cerr << "Error: Division by zero" << std::endl;
        _exit(1);
    }
    return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++()
{
    n++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    n++;
    return (temp);
}

Fixed &Fixed::operator--()
{
    n--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    n--;
    return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}
