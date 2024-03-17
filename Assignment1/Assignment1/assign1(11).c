#include<stdio.h>
#include<limits.h>
int main()
{
	printf("----------------------------------------\n");
	printf("data type     FS    size   range           \n");
	printf("------------------------------------------\n");
	printf("CHA           %%c   %ld    %d to %d   \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("int           %%c   %ld    %d to %d   \n",sizeof(int),INT_MIN,INT_MAX);
	printf("unsigned char %%c   %lu    0 to %d    \n",sizeof(unsigned char),UCHAR_MAX,SCHAR_MAX);
	printf("SHORT int     %%c   %lu    %d to %d   \n",sizeof(int),SHRT_MIN,SHRT_MAX);
	printf("unsigned int  %%u   %lu    0 to %u   \n",sizeof(unsigned int),UINT_MAX,UINT_MAX);
	//printf("CHA         %%C  %d    %d to %d   \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	//printf("CHA         %%C  %d    %d to %d   \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	//printf("CHA         %%C  %d    %d to %d   \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);



}
