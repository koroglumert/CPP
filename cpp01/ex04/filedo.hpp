#include <iostream>

class filedo
{
private:
	std::string file_name;
	int fd;
public:
	filedo(std::string);
	~filedo();
	int		open_file();
	void	close_file();
	void	copy_file(int fd_second);
};
