#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 255
void changestring(char* str) {
	int n = strlen(str);
	for (int i = 0; i < n; i++) {
		if (str[i] == 'p') {
			if (str[i + 1] == 'h') {
				str[i] = 'f';
				str[i + 1] = str[i + 2];
				
				}


		}
	}
	printf("%s", str);
}
int main() {
	char s[N];
	printf("Input string:");
	fgets(s, N, stdin);
	changestring(s);

}


