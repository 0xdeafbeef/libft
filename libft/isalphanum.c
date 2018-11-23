int isalpha(int c)
{
	return ((((c >= 65) && c <= 90) || (c >= 97 && c <= 122)) ? c : 0);
}

int isdigit(int ch)
{
	return ((ch >= 48 && ch <= 57) ? ch : 0);
}

int ft_isalnum(int c)
{
	return ((isalpha(c) != 0) && (isdigit(c) != 0) ? c : 0);
}