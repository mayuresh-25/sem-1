#include <stdio.h>
/*NAME: Mayuresh Dattaram Devrukhkar
COMPS DIV: C
ROLL NO :60
UIN :251P071
*/

int main() {
    char str[100];
    int start = 0, end = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        if (str[start] != str[end]) {
            printf("The string is NOT a palindrome.");
            return 0;
        }
        start++;
        end--;
    }

    printf("The string is a palindrome.");
    return 0;
}
