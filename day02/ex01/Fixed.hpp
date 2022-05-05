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
		Fixed(const Fixed &elem);
		Fixed(const int num);
		Fixed(const float num);

		virtual~Fixed();

		void	setRawBits(int const new_value);
		int		getRawBits(void) const;

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	&operator=(const Fixed &elem);
};

std::ostream &operator<<(std::ostream &out, const Fixed &elem);

#endif
