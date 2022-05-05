#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int	value;
		const static int fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& elem);
		Fixed(const int num);
		Fixed(const float num);

		virtual~Fixed();

		void	setRawBits(int const new_value);
		int		getRawBits(void) const;

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed& elem);
		bool	operator<(const Fixed& elem);
		bool	operator>=(const Fixed& elem);
		bool	operator<=(const Fixed& elem);
		bool	operator==(const Fixed& elem);
		bool	operator!=(const Fixed& elem);

		Fixed	operator+(const Fixed& elem);
		Fixed	operator-(const Fixed& elem);
		Fixed	operator*(const Fixed& elem);
		Fixed	operator/(const Fixed& elem);
		Fixed	&operator=(const Fixed& elem);

		Fixed	&operator--();
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	operator--(int);

		static			Fixed &min(Fixed &num1, Fixed &num2);
		static			Fixed &max(Fixed &num1, Fixed &num2);
		const static	Fixed &min(const Fixed &num1, const Fixed &num2);
		const static	Fixed &max(const Fixed &num1, const Fixed &num2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &elem);

#endif