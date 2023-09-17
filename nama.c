#include <stdio.h>
#include <conio.h>

void main()
{
	char A[22] = {'M','U','H','A','M','M','A','D','T','A','U','F','I','K','R','A','M','A','D','H','A','N'};
	int i;
	
	for (i=0;i<=21;i++)
	{
		printf ("Nilai ke %i berisi huruf %c \n", i, A[i]);
	}
	getch();
}
