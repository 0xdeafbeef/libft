

void ft_putchar(char c);

int main()
{
	char ch = 'a'-1;
	while (++ch <= 'z')
	{
		ft_putchar(ch);
	}
}