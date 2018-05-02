int		test_format(char const format)
{
	char	*str;
	int		i;

	str = "%sSpdDoOuUxXcChjz";
	i = 0;
	while (str[i])
	{
		if (format == str[i])
			return (1);
		i++;
	}
	return (0);
}

int		test_field