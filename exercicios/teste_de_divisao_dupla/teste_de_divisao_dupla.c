#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int i, div1, div2, nmax;

	i = 0;

	printf("Digite o numero maximo de testes: ");
	scanf("%i", &nmax);

	printf("Digite o divisor 1: ");
	scanf("%i", &div1);

	printf("Digite o divisor 2: ");
	scanf("%i", &div2);

	while(i <= nmax)
	{
		if(i % div1 == 0)
		{
			if (i % div2 == 0) printf("%i eh divisivel por %i e %i\n", i, div1, div2);
		       	else printf("%i eh divisivel por %i\n", i, div1); 
		} else 
		{
			if (i % div2 == 0) printf("%i eh divisivel por %i\n", i, div2);
			else printf("%i\n", i);
		}

		i++;
	}

	return 0;
}
