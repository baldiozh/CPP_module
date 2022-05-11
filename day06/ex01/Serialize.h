#ifndef CPPMODULES_SERIALIZE_H
#define CPPMODULES_SERIALIZE_H

#include <iostream>

struct Data {
	int	num;
};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif
