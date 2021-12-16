#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <exception>
template <typename T>

class Array {

private:
	T *_data;
	size_t _size;
public:
	Array(): _data(NULL), _size() {};
	Array(unsigned int size): _size(size) {
		_data = new T[size];
		for (size_t i = 0; i < size; i++)
			_data[i] = T();
	};
	Array(const Array &A){
			*this = A;
	};
	T const& operator= (T &A){
		if (this != &A){
			if (_data != NULL)
				delete _data;
			this->_size = A._size;
			this->_data = new T[this->_size];
			for (size_t i = 0; i < _size; i++)
				_data[i] = A._data[i];
		}
		return *this;
	};

	T &operator[] (size_t i)
	{
		if (i >= this->_size)
			throw std::out_of_range("You are accessing a non-existent array index");
		return (_data[i]);
	}

	size_t getSize() const { return _size;}
	~Array(){
		delete[] _data;
	}
};
#endif
