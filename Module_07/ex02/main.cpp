#include "Array.hpp"

int main()
{
	{
		try
		{
			Array<int> int_array = Array<int>();
			std::cout << "default int array:  ";
			std::cout << int_array[0] << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() <<std::endl;
		}
	}

	{
		try {
			Array<int> b(5);
			std::cout << "int array with size:  ";
			std::cout << b[0] << std::endl;

		}

		catch (std::exception &e){
			std::cout << e.what() <<std::endl;
		}
	}
	{
		try {
			Array<double> a2 = Array<double>();
			Array<double> b2(3);
			std::cout << "double array with size:  ";
			std::cout << b2[0]  <<  std::endl;
			b2[0] = 3.4;
			std::cout << "change double array size:  ";
			std::cout << b2[0] << std::endl;

		}
		catch (std::exception &e){
			std::cout << e.what() <<std::endl;
		}
	}
	{
		try{
			Array<float> b(5);
			std::cout << "float array with size:  ";
			std::cout << b[0] << std::endl;
			b[0] = 3.6f;
			std::cout << "change float array size:  ";
			std::cout << b[0] << std::endl;

		}
		catch (std::exception &e){
			std::cout << e.what() <<std::endl;
		}

	}
	{
		try{
			Array<float> a = Array<float>();

		}
		catch (std::exception &e){
			std::cout << e.what() <<std::endl;
		}
	}
	return 0;
}