#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/
/**                                                                                                                                                                                                        
 *main - Entry point                                                                                                                                                                                       
 */
int main(void)
{
 	int ch;
	int i;
	int j;
	int k;
	int you = 0;

	for (ch = 0 ; ch <= 9 ; ch++)
	{
         	for (i = 0 ; i <= 9 ; i++)
		{
		  for (j = 0 ; j <= 9 ; j++)
		    {
		      for (k = 0 ; k <= 9 ; k++)
			{
                          if (you != 0)
				{

				  
                                 	putchar (ch + '0');
					putchar (i + '0');
					putchar(' ');
					putchar (j + '0');
					putchar (k + '0');
					if (you >= 0)
					{
                                         	putchar (',');
                                                putchar (' ');
						you++;
					}}}}}}
	putchar ('\n');

	return (0);
}

