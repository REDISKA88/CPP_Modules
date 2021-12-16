#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iomanip>
#include <iostream>
#include <exception>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>

void easyfind(T t, int i){
	if (std::find (t.begin(), t.end(), i) == t.end())
		throw (std::runtime_error ("second parameter not found in container"));
	std::cout << "success, required element found" << std::endl;
}
#endif
