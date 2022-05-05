#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
private:
	int					value;
	const static int	fractional_bits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &elem);
	int		getRawBits(void) const;
	void	setRawBits(int const new_value);
	Fixed	&operator=(const Fixed &elem);
};

#endif

