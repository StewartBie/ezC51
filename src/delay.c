void Delay(xms)		//@12.000MHz
{
	unsigned char i, j;

	i = 2;
	j = 239;
	while (xms--)
	{
		do
		{
			while (--j);
		} while (--i);
	}
}