#include <stdio.h>
#include <math.h>

// Function to calculate the area of a circle
float calculateArea(int radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

// Function to calculate the circumference of a circle
float calculateCircumference(int radius)
{
    float cir = 2 * 3.14 * radius;
    return cir;
}

int main()
{
    int radius;
    char option;

    while (true)
    {
        printf("Enter Choice: ");
        scanf("%s", &option);
        if (option == 'a' || option == 'A')
        {
            printf("Your choice is %s to Calculate Area\n", &option);
            printf("Enter radius: ");
            scanf("%d", &radius);
            float area = calculateArea(radius);
            printf("Circle area: %.f\n", floor(area));
            break;
        }
        else if (option == 'c'|| option == 'C')
        {
            printf("Your choice is %s to Calculate Circumference\n", &option);
            printf("Enter radius: ");
            scanf("%d", &radius);
            float cir = calculateCircumference(radius);
            printf("Circle circum: %.f \n", floor(cir));
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}