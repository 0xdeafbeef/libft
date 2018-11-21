#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "utils.h"

int check_on_erros(int argc)
{
	if (argc==1)
	{
		ft_putstr("File name missing.");
		return 1;
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		return 1;
	}
	return 0;
}
int main (int argc, char **argv)
{
	if (check_on_erros(argc))
	{
		return (137);
	}
}
