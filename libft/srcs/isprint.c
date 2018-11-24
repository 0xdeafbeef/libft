int ft_isprint(int ch)
{
	return ((ch >= 0x20 && ch <= 0x7e) ? 1 : 0);
}
