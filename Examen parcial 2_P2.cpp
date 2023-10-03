//Multiplo de un número en una serie
#include <stdio.h>

int main() 
{
  for (int i = 1; i <= 100; ++i) 
	{
        if (i % 3 == 0) 
		{
            printf("Este numero es multiplo de 3: %d\n", i);
        } 
		
		else 
		
		{
            printf("Este numero no es multimplo de 3: %d\n", i);
        }
    }

    return 0;
}



