#include <stdio.h>

int main() {
    unsigned short T;
    scanf("%hu", &T);
    for (unsigned int i = 1; i <= T; i++) {
        char string[100001];
        scanf("%s", string); getchar();
        int currI = 0;
        char alph[26];
        for (int j = 0; j < 26; j++) { alph[j] = 0; };
        while (1) {
        	if (string[currI] != '\0') {
        		if (alph[string[currI] - 'a'] == 0) alph[string[currI] - 'a'] = 1;
				currI++;
			} else break;
		};
		int total = 0;
		for (int k = 0; k < 26; k++) { total += alph[k]; }
        printf("Case #%hu: ", i);
        printf("%s", total % 2 == 1 ? "Ewwww" : "Yay");
        printf("\n");
    }
    return 0;
}
