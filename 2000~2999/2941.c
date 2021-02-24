#include <stdio.h>
#define Max 101
int main(void) {
	char croatia[Max];
	gets(croatia);
	int count = 0;
	for (int i = 0; i < Max; i++) {
		if (croatia[i] == '\0')
			break;
		if (croatia[i] == 'd')
		{
			if (croatia[i + 1] == 'z')
				if (croatia[i + 2] == '=')
					count -= 1;
		}
		else if (croatia[i] == '=')
			count--;
		else if (croatia[i] == '-')
			count--;
		else if (croatia[i + 1] == 'j')
		{
			if (croatia[i] == 'l')
				count--;
			else if (croatia[i] == 'n')
				count--;
		}
		count++;
	}
	printf("%d", count);
}
