/*********************************************************
*		PRINTFs					 *
*	Author: Reez Patel				 *
*	Source: Ex: 4.7 (P-111) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	float n = 10.45678;
	printf( "%.2e \n"
		"%.4e \n"
		"%.8e \n",n,n,n);
	return 0;
}
