#include <stdio.h>
#include "def.h"

void input(char str[n])
{
    printf("path: ");
    fgets(str,n,stdin);
}

void check (char str[n],char str2[n],int* a,int* b)
{
    int i= 0,p = 0,k = 0,j = 0,s = 0,x = 0;
    scut(str,str2,':');
    for (i=0;str2[i] != '\0';i++)
		if (str2[i] == '.')
			s++;	
	for (p = 0;p <= s;p++)
		{
		k = 0;
		stok(str,str2);
		j = slen(str);
		k = sspn(str,k);
		if (j == k)
			x++;
		}
    *a = s;
    *b = x;
}

void process (char str1[n])
{
    toLowCase(str1);
}

int output(int s,int x,char str[n],char str1[n])
{
    char ru[2] = "ru", org[3] = "org", com[3] = "com";
    if (x == (s+1))
		printf("Is SCP: yes\n");
	else 
		{printf("Is SCP: no");
		return 0;
		}
	if ((s < 4) && ((sequal(str,ru) == 0) || (sequal(str,org) == 0) || (sequal(str,com) == 0)))
		printf("Domain name is correct: yes\n");
	else 
		{printf("Domain name is correct: no");
		 return 0;
		}
	printf("Updated path: %s",str1);
	return 0;
}

void stok(char str[n],char str2[n])
{
    int i= 0,k = 0;
    char mstr[n];
    scopy(str2,mstr);
    scut(mstr,str,'.');
    for (i=0;mstr[i]!= '\0';i++)
	if(mstr[i] == '.')
	    {for(k=0,i=i+1;str[i]!='\0';k++,i++)
		 str2[k]=mstr[i];
	    	 break;
	     }
    str2[k]= '\0';
}

void toLowCase(char s[n])
{
	int i=0;
	for (i=0;s[i] != '\0';i++)
		if (s[i] >='A' && s[i] <= 'Z')
			s[i]+=('a' - 'A');
}

int sequal(char s1[n], char t[3])
{
	int i=0, flg=1;
	for (i=0;flg && (s1[i] != '\0' || t[i] != '\0');i++)
		if (s1[i] != t[i])
			flg = 0;
	return flg;
}

int sspn (char str[n],int k)
{
    int i = 0;
    for (i=0;str[i] != '\0';i++)
	if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	    k++;
    return k;
}

int slen(char s[n])
{
    int i=0;
    while(s[i] !='\0')
    i++;
    return i;
}

void scut(char s2[n],char s[n],char cut)
{int i = 0;
    for (i=0;s2[i]!= '\0';i++)
	if (s2[i] != cut)
	    s[i] = s2[i];
    else 
	break;
    s[i] = '\0';
}

void scopy (char s1[n],char s2[n])
{
    int i = 0;
    for (i=0;s1[i] != '\0';i++)
		s2[i] = s1[i];
	s2[i] = '\0';
}