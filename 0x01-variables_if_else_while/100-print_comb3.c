#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main()
{
    int digit=0, digit2;
    while (digit<=9)
    {
        digit2=0;
        while (digit2<=0)
        {
            
            if (digit != digit2 && digit < digit2)
            {
                
                putchar(digit + 48);
				putchar(digit2 + 48);

				if (digit + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
                }

            }
            digit++;

        }
        digit2++;
    }
    putchar ('\n');

return (0);
}
