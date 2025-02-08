/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 10:56:08 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/02/08 14:06:17 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <unistd.h>


class Fixed
{
private:
    int n;
    static const int    s = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed &operator=(const Fixed &other);
    void    setRawBits(int const val);
    int getRawBits() const;
    int toInt() const;
    float toFloat() const;
    Fixed(const int val);
    Fixed(const float val);
    int operator>(const Fixed &other) const;
    int operator<(const Fixed &other) const;
    int operator>=(const Fixed &other) const;
    int operator<=(const Fixed &other) const;
    int operator==(const Fixed &other) const;
    int operator!=(const Fixed &other) const;

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif