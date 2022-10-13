#include <stdio.h>

int main() {
    int number_of_words;
    char words[50][50];
    printf("Enter number of words:");
    scanf("%d", &number_of_words);
    printf("Enter words:\n");
    int i;
    for (i = 0; i < number_of_words; i++) {
        scanf("%s", words[i]);
    }
    printf("\nOutput:\n");
    for (i = 0; i < number_of_words; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}
