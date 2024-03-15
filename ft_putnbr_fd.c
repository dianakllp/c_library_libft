void ft_putnbr_fd(int n, int fd)
{
    if(n < 0) //This condition checks if the input integer n is negative. 
    {
        if (n == -2147483648) 
		    ft_putstr_fd("-2147483648", fd);
        else if (n < 0)
	    {
		    ft_putchar_fd('-', fd);
		    n = -n;
	    }
    }
    if (n >= 10) //This condition checks if the input integer n has more than one digit 
    //(i.e., it is greater than or equal to 10). If it does, it recursively calls ft_putnbr_fd with n / 10 
    //to output the digits before the last one, and then outputs the last digit by adding '0' to the remainder of n when divided by 10.
	{
		ft_putnbr_fd(n / 10, fd); // example:  50 / 10 = 5;
		ft_putnbr_fd(n % 10, fd); // 50 % 10 = 0; 
	}
    else
		ft_putchar_fd('0' + n, fd);
}
