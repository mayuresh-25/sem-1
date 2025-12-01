#include <stdio.h>
/*NAME: Mayuresh Dattaram Devrukhkar
COMPS DIV: C
ROLL NO :60
UIN :251P071
*/
int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string = %d", length);

    return 0;
}
