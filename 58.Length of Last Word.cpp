// Length of Last Word.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLastWord(char* s) {
	int length = 0;
	int flag = 0;//flag = 0, previous character is ' '; flag = 1, previous charcter is non-space
	while (*s != '\0')
	{
		if (*s == ' ' && flag == 0)//skipping space
		{
			//do nothing
		}
		else if (*s == ' ' && flag == 1)//end of a word
		{
			flag = 0;
		}
		else if (*s != ' ' && flag == 0)//strat a new word, reset length to one.
		{
			length = 1;
			flag = 1;	
		}
		else if (*s != ' ' && flag == 1)//add word length by one
			length++;
		s++;
	}
	return length;
}


int _tmain(int argc, _TCHAR* argv[])
{
	char *s = "  asdfsdf  adfda  ";
	printf("Length of last word is %d\n", lengthOfLastWord(s));
	system("pause");
	return 0;
}

