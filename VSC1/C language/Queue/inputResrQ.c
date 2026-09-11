#include <stdio.h>

#define N 100

int main(void)
{
    int q[N];
    int f = 0, r = -1, count = 0;
    int ch, x, i, index;

    do
    {
        printf("\n1 InsertRear 2 DeleteFront 3 DeleteRear 4 Display 5 Exit: ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            if (count == N)
            {
                puts("Full");
            }
            else
            {
                scanf("%d", &x);

                r = (r + 1) % N;
                q[r] = x;
                count++;
            }
        }
        else if (ch == 2)
        {
            if (count == 0)
            {
                puts("Empty");
            }
            else
            {
                f = (f + 1) % N;
                count--;
            }
        }
        else if (ch == 3)
        {
            if (count == 0)
            {
                puts("Empty");
            }
            else
            {
                r = (r - 1 + N) % N;
                count--;
            }
        }
        else if (ch == 4)
        {
            if (count == 0)
            {
                puts("Empty");
            }
            else
            {
                for (i = 0; i < count; i++)
                {
                    index = (f + i) % N;
                    printf("%d ", q[index]);
                }

                puts("");
            }
        }

    } while (ch != 5);

    return 0;
}