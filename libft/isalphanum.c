static int ft_isalpha(int c)
{
	return ((((c >= 65) && c <= 90) || (c >= 97 && c <= 122)) ? 1 : 0);
}

static int ft_isdigit(int ch)
{
	return ((ch >= 48 && ch <= 57) ? 1 : 0);
}

int ft_isalnum(int c)
{
	return ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1) ? 1 : 0);
}