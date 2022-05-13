#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
public:
	Span(unsigned int maxSize);
	Span(const Span &obj);
	~Span();

	Span &operator=(const Span &obj);

	void addNumber(int num);
	int shortestSpan();
	int longestSpan();

	template<class InputIt>
	void addElements(InputIt begin, InputIt end)
	{
		int i = 0;

		for (InputIt it = begin; it != end ; ++it) {
			++i;
		}
		if (i + _store.size() > N) {
			throw std::range_error("Too many elements to add");
		}

		_store.insert(_store.end(), begin, end);
	}
private:
	Span();

	unsigned int N;
	std::vector<int>	_store;
};


#endif
