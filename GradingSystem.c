#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5, i;
    float percent;
    {
        printf("\t Enter the 5 subject marks of the student:\n");
        scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
        percent = (s1 + s2 + s3 + s4 + s5) / 5.0;
        if (percent >= 80)
        {
            printf("\nGrade = A+ ");
        }
        else if (percent >= 70 && percent < 80)
        {
            printf("\nGrade = A");
        }
        else if (percent >= 60 && percent < 70)

        {
            printf("\nGrade = B ");
        }
        else if (percent >= 50 && percent < 60)
        {
            printf("\nGrade = C ");
        }
        else if (percent >= 40 && percent < 50)
        {
            printf("\nGrade = D ");
        }
        else if (percent < 40)
        {
            printf("\nGrade = F ");
        }
    }
    return 0;
}
