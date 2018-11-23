int ft_toupper(int c)
{
	return ((c >= 97 && c <= 122) ? (c - (97 - 65)) : (c));
}