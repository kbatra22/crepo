#include <stdio.h>
#include<iostream>

int main()
{
    char n1[50], n2[50], n3[50];
    int m1, m2, m3;
    int choice;
    float avg;

    printf("*******************************\n");
    printf(" STUDENT MARK SYSTEM\n");
    printf("*******************************\n");

    printf("Enter student 1 name: ");
    std::cin >> n1;

    printf("Enter student 1 mark: ");
    std::cin>>m1;

    printf("Enter student 2 name: ");
    std::cin >> n2;

    printf("Enter student 2 mark: ");
    std::cin >> m2;

    printf("Enter student 3 name: ");
    std::cin >> n3;

    printf("Enter student 3 mark: ");
    std::cin >> m3;

    printf("\n1. Show Students\n");
    printf("2. Calculate Average\n");
    printf("3. Exit\n");

    printf("Enter choice: ");
    std::cin >> choice;

    if (choice == 1)
    {
        printf("\nStudent 1: %s Mark: %d\n", n1, m1);
        printf("Student 2: %s Mark: %d\n", n2, m2);
        printf("Student 3: %s Mark: %d\n", n3, m3);
    }

    if (choice == 2)
    {
        avg = (m1 + m2 + m3) / 3;

        printf("\nAverage = %f\n", avg);

        if (avg >= 80)
        {
            printf("Grade A\n");
        }

        if (avg >= 70 && avg < 80)
        {
            printf("Grade B\n");
        }

        if (avg >= 60 && avg < 70)
        {
            printf("Grade C\n");
        }

        if (avg >= 50 && avg < 60)
        {
            printf("Grade D\n");
        }

        if (avg < 50)
        {
            printf("Fail\n");
        }
    }

    if (choice == 3)
    {
        printf("Bye\n");
    }

    return 0;
}