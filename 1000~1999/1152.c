#include <stdio.h>
#define Length 1000001
int main(void) {
	char setence[Length];
	int count=0;
	gets(setence);

	for (int i = 0; i<Length; i++) {
		if (setence[0] == ' ' && i == 0)
			continue;
		else if (setence[0] == ' ' && setence[1] == '\0')
			break;
		else if(setence[0] == '\0')
			break;
		if (setence[i] == '\0'|| setence[i+1] == '\0')
		{
			count++;
			break;
		}
		if (setence[i] == ' ')
			count ++;
	}
	printf("%d", count);
return 0;}