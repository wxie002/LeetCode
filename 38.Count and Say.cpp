#include<stdio.h>

char* countAndSay(int n) {
	char s[100000];
	char t[100000];
	s[0] = '1';
	s[1] = '\0';
	char *c = s;//point to preprocess array
	char *d = t;//point to  processed array 
	char *temp;
	char prev;
	int count;
	int m;
	int flag = 0;
	for (int i = 0; i < n-1; i++)
	{
		prev = c[0];
		count = 0;
		m = 0;
		while (*c != '\0')
		{
			if (*c == prev)//counting
				count++;
			else
			{
				d[m++] = count + '0';
				d[m++] = prev;
				prev = *c;
				count = 1;//reset count
			}
			c++;
		}
		d[m++] = count + '0';
		d[m++] = prev;
		d[m] = '\0';
		//switch pointer c and d
		if (flag == 0)
		{
			c = t;
			d = s;
			flag = 1;
		}
		else
		{
			c = s;
			d = t;
			flag = 0;
		}
	}
	return c;
}

void main()
{
	printf("%s", countAndSay(5));
	getchar();

}