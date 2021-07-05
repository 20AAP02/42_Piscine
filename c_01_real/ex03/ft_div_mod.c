#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = (a / b) % 10;
}

int main()
{
	int a = 2;
	int b = 3;
	int *div;
	int *mod;
	ft_div_mod(a, b, div, mod);

	char a1 = *div + '0';
	char b1 = *mod + '0';
	write(1, &a1, 1);
	write(1, &b1, 1);
}
