#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 * 
 * Return: nothing.
 */
void modify_my_char_var(char *cc, char ccc)  
{
	printf("the value of 'cc' is %p\n", cc);
	printf("the value of ccc is %c\n", ccc);
	printf("the address of cc is %p\n", &cc);

	   *cc = 'o';
	      ccc = 'l';
}
