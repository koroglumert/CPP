#ifndef FILEDO_HPP
#define FILEDO_HPP

# include <iostream>
# include <fstream>

class filedo
{
private:
	std::string		file_name;
	std::ifstream	file_read;
public:
	filedo(std::string);
	~filedo();
	void	open_file();
	void	close_file();
	void	copy_file(std::string, std::string);
	std::string	ft_get_line();
};
#endif

/*
dosya açılabilir mi kontrolü
*/