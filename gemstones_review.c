#include<string.h>
#include<stdio.h>

int main() {

    int rocks, i = 0;
    scanf("%d", &rocks);
    char letter[26] = {0};
    int count = 0, r = 0;

    for ( r = 0; r < rocks; r++) {
        char s[100];
        scanf("%s", s);
        for (i = 0; i < strlen(s); i++) {
            char c = s[i];
            if (letter[c - 'a'] == r) {
                letter[c - 'a']++;
                if (letter[c - 'a'] == rocks) {
                    count++;
                }                    
            }
        }
    }

    printf("%d", count);

    return 0;
}
