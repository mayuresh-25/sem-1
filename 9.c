#include <stdio.h>

/*NAME: Mayuresh Dattaram Devrukhkar
COMPS DIV: C
ROLL NO :60
UIN :251P071
*/

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {

    struct student_record s[5];
    int topperIndex = 0;
0
    printf("Enter details of 5 students:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_number);

        printf("Enter total marks: ");
        scanf("%f", &s[i].total_marks);
    }

    for (int i = 1; i < 5; i++) {
        if (s[i].total_marks > s[topperIndex].total_marks) {
            topperIndex = i;
        }
    }

    printf("\n--- Topper Details ---\n");
    printf("Name: %s\n", s[topperIndex].name);
    printf("Roll Number: %d\n", s[topperIndex].roll_number);
    printf("Total Marks: %.2f\n", s[topperIndex].total_marks);

    return 0;
}
