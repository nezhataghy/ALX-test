






int print_a_char(char c)
{
	return (write(1, &c, 1));
}




int print_a_string(char *s)
{
	return (write(1, s, strlen(s)));
}





int print_percent(char c)
{
	return (write(1, &c, 1));
}
