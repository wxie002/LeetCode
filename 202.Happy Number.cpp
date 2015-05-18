#include<stdio.h>
bool isHappy(int n) {
	int m=0;
	int digit;
	int loop_check[100];
	int count = 0;
	while (m != 1)
	{
		m = 0;
		while (n >= 1)
		{
			digit = n % 10;
			m += digit * digit;
			n = n / 10;//truncation toward zero
		}
		for (int i = 0; i < count; i++)
		{
			if (loop_check[i] == m)//found loop
				return false;
		}
		loop_check[++count] = m;//add new record, update count
		n = m;
	}
	return true;
}
void main()
{
	if (isHappy(7))
		printf("True\n");
	else printf("False\n");
	getchar();
}