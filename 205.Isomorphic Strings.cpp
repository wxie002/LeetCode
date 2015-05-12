#include<stdio.h>
bool isIsomorphic(char* s, char* t) {
	char map[128];//ASCII size 128
	for (int i = 0; i < 128; i++)
		map[i] = 0;
	while (*s != '\0' && *t != '\0')
	{
		//add new map
		if (map[*s] == 0)
		{
			for (int i = 0; i < 128; i++)
				if (i != *s && map[i] == *t)//two characters mapped to same character
					return false;
			map[*s] = *t;
			s++;
			t++;
		}
		else if (map[*s] != *t)
			return false;
		else
		{
			s++;
			t++;
		}
			
	}
	if (*s == '\0' && *t == '\0')
		return true;
	else return false;
}
void main()
{
	if (isIsomorphic("13", "42"))
		printf("True\n");
	else printf("False\n");
	getchar();
}