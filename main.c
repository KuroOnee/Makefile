#include <stdio.h>
#include "decline.h"
#define n 100

int main()
{
	char str[n], str1[n], str2[n];
	int s,x;
	input(str);
	scopy(str,str1);
	check(str,str2,&s,&x);	 
	process(str1);
	output(s,x,str,str1);
	return 0;
}