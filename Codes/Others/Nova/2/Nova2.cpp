#include<stdio.h>
#include<math.h>

int main()
{
    int gender, age;
    float gpa, height, weight;

    printf("For Male: Enter 1\nFor Female: Enter 2\n");
    scanf("%d %d %f %f %f", &gender, &age, &gpa, &height, &weight);

    if(age>=17 && age<=20 && gpa>=3)
    {
        if(gender==1)
        {
            if(height>=1.68 && weight>=49.90)
            {
                printf("Qualified\n");
            }
            else
            {
                printf("Disqualified\n");
            }
        }
        else if(gender==2)
        {
            if(height>=1.60 && weight>=47.00)
            {
                printf("Qualified\n");
            }
            else
            {
                printf("Disqualified\n");
            }
        }
    }
    else
    {
        printf("Disqualified\n");
    }

    return 0;
}
