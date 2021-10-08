#include <stdio.h>            //Rupin Vijan----->04576803120
void main()
{
    int arr[] = {2, 3, 4, 10, 40}, len = 5, i, midpos = len / 2, num, pos = 0;
    int mid = arr[midpos];
    printf("Enter Number to Find :: ");
    scanf("%d", &num);
    if (num < mid)
    {
        for (i = 0; i < midpos; i++)
        {
            if (num == arr[i])
            {
                pos = i + 1;
            }
        }
    }
    else
    {
        for (i = midpos; i < len; i++)
        {
            if (num == arr[i])
            {
                pos = i + 1;
            }
        }
    }

    printf("The final position of the Element is %d", pos);
}