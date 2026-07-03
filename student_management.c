#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int choice, n = 0, i, roll, found;

    while (1) {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("\nStudent Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("\nNo Records Found!\n");
            } else {
                printf("\nStudent Records\n");
                printf("-----------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("Roll : %d\n", s[i].roll);
                    printf("Name : %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    printf("-----------------------------\n");
                }
            }
            break;

        case 3:
            found = 0;

            printf("\nEnter Roll Number: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {

                    printf("\nStudent Found\n");
                    printf("Roll : %d\n", s[i].roll);
                    printf("Name : %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("\nStudent Not Found!\n");

            break;

        case 4:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}
