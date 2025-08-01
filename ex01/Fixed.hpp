/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:55:41 by ilchahbi          #+#    #+#             */
/*   Updated: 2025/02/08 10:13:10 by ilchahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


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
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif