

void ft_putchar(char c);

void ft_print_alphabet(void)
{
	char ch = 'a'-1;
	while (++ch <= 'z')
	{
		ft_putchar(ch);
	}
}