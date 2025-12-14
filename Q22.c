#include <stdio.h>
#include <string.h>
int main() {
    char word[100];
    int z =0, o =0;
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'z')
            z++;
        else if (word[i] == 'o')
            o++;  }
 if (o == 2 * z)
        printf("Yes");
    else
        printf("No");
    return 0;
}