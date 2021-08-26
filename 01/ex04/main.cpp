#include <iostream>
#include <fstream>
#include <string>

int	error()
{
	std::cout << "Wrong arguments" << std::endl;
	return 1;
}

int	main( int argc, char **argv ) {

	std::ifstream	ifs;
	std::string		fileName;
	std::string		s1;
	std::string		s2;
	std::ofstream	ofs;
	std::string		line;
	std::size_t		pos = 0;
	std::size_t		start = 0;
	std::size_t		len;

	if (argc != 4)
		return error();
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	ifs.open(fileName, std::ifstream::in);
	if (ifs.fail())
		return error();
	ofs.open(fileName + ".replace", std::ofstream::out);
	if (ofs.fail())
		return error();
	len = s1.size();
	while (std::getline(ifs, line)) {

		start = 0;
		pos = 0;
		while ((pos = line.find(s1, start)) != std::string::npos) {

			line.erase(pos, len);
			line.insert(pos, s2);
			start += pos + len;
		}
		ofs << line;
		if (!ifs.eof())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
