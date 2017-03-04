int		ft_iscntrl(int c)
{
	return (((c >= 0 && c < 32) || c == 127) ? 1 : 0);
}
