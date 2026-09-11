#include <stdio.h>

int main(void)
{
    int q[100], f = 0, r = -1;
    int ch, x, i;

    do
    {
        printf("\n1 InsertFront 2 InsertRear 3 DeleteFront 4 Display 5 Exit: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                if (r < 99)
                {
                    scanf("%d", &x);

                    for (i = r + 1; i > f; i--)
                        q[i] = q[i - 1];

                    q[f] = x;
                    r++;
                }
                else
                {
                    puts("Full");
                }
                break;

            case 2:
                if (r < 99)
                {
                    scanf("%d", &q[++r]);
                }
                else
                {
                    puts("Full");
                }
                break;

            case 3:
                if (f <= r)
                {
                    f++;
                }
                else
                {
                    puts("Empty");
                }
                break;

            case 4:
                if (f <= r)
                {
                    for (i = f; i <= r; i++)
                        printf("%d ", q[i]);

                    puts("");
                }
                else
                {
                    puts("Empty");
                }
                break;

            case 5:
                break;

            default:
                puts("Invalid choice");
        }

    } while (ch != 5);

    return 0;
}