#include "replace.hpp"
int main(int argc, char **argv){

	std::string s1;
	std::string s2;
	std::string f;
	std::string buf;

	if (argc != 4)
		return -1;
	f = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
		return -1;
	std::ifstream in(f);
	std::ofstream out;

	if (!in.is_open())
		return -1;
	out.open(f + ".replace");
	std::getline(in, buf, '\0');
	size_t pos = 0;
	pos = buf.find(s1, pos);
	while (pos != std::string::npos)
	{
		buf.erase (pos, s1.length());
		buf.insert(pos, s2);
		pos = buf.find(s1, pos + s2.length() - 1);
	}

	out << buf;
	in.close();
	out.close();
	return (0);
}
