#include "filedo.hpp"

filedo::filedo(std::string file_name)
{
	this->file_name = file_name;
}

filedo::~filedo()
{
	this->close_file();
	std::cout << "File closed" << std::endl;
}

std::string	filedo::ft_get_line()
{
	std::string	line;
	char		character;

	while ((this->file_read).get(character))
	{
		line += character;
		if (character == '\n') //Bu kurallara aykırı mı?
			break ;
	}
	return (line);
}

void	filedo::copy_file(std::string s1, std::string s2)
{
	size_t position;
	std::string line;

	std::ofstream new_file_write((this->file_name).append(".replace"));
	std::getline((this->file_read), line);
	while (line.length())
	{
		std::cout << line;
		position = 0;
		position = line.find(s1);
		std::cout << position<< std::endl; 
		if (position == std::string::npos)
		{
			new_file_write << line;
			line = ft_get_line();
			//std::getline((this->file_read), line);
			if (!line.length())
				break;
			new_file_write << std::endl;
			continue;
		}
		new_file_write << line.substr(0, position);
		new_file_write << s2;
		position += s1.length();
		line = line.substr(position);
		if (!line.length())
		{
			line = ft_get_line();
			//std::getline((this->file_read), line);
			if (line.length())
				new_file_write << std::endl;
		}
	}
	new_file_write.close();
}

void	filedo::open_file(void)
{
	this->file_read = std::ifstream(this->file_name);
	if (!(this->file_read))
	{
		std::cerr << "Error! File failed to open!" << std::endl;
		exit (1);
	}
}

void	filedo::close_file(void)
{
	(this->file_read).close();
}
