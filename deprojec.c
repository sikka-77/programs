#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, state = 0, choice = 0;
    char str[50];
    do
    {
        state = 0;
        printf("\nMENU:\nString that\n1.  starts and ends with 'a'\n2.  ends with 'bb'\n3.  has odd numbers of b's\n");
        printf("4.  start with 'a' and end with 'b'\n5.  has substring as '110'\n6.  has number of a's are divisible by 3\n");
        printf("7.  don't end with '101'\n8.  has even number of b's and even number of a's\n9.  has atleast 2 0's\n");
        printf("10. has atmost 2 0's\n11. has exact 2 0's\n12. has odd a's and even b's\n13. has odd a's and odd b's\n");
        printf("14. has even a's and odd b's\n15. ends with 00 or 11\n16. Exit\nEnter your choice:");

        scanf("%d", &choice);
        if (choice > 0 && choice <= 15)
        {
            printf("Enter the string: ");
            scanf("%s", str);
            printf("\nInitially string is in state 0");
        }
        switch (choice)
        {
        case 1:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 2;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                case 2:
                    if (str[i] == 'a')
                        state = 2;
                    else
                        state = 2;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 1)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 2:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 0;
                    else
                        state = 1;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 0;
                    else
                        state = 2;
                    break;
                case 2:
                    if (str[i] == 'a')
                        state = 0;
                    else
                        state = 2;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 2)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 3:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 0;
                    else
                        state = 1;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 0;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 1)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 4:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 2;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                case 2:
                    if (str[i] == 'a')
                        state = 2;
                    else
                        state = 2;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 3)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 5:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == '1')
                        state = 1;
                    else
                        state = 0;
                    break;
                case 1:
                    if (str[i] == '1')
                        state = 2;
                    else
                        state = 0;
                    break;
                case 2:
                    if (str[i] == '1')
                        state = 2;
                    else
                        state = 3;
                    break;
                case 3:
                    if (str[i] == '1')
                        state = 3;
                    else
                        state = 3;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 3)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 6:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 4;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 2;
                    else
                        state = 5;
                    break;
                case 2:
                    if (str[i] == 'a')
                        state = 3;
                    else
                        state = 6;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                case 4:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 4;
                    break;
                case 5:
                    if (str[i] == 'a')
                        state = 2;
                    else
                        state = 5;
                    break;
                case 6:
                    if (str[i] == 'a')
                        state = 3;
                    else
                        state = 6;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 3)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 7:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == '0')
                        state = 0;
                    else
                        state = 1;
                    break;
                case 1:
                    if (str[i] == '0')
                        state = 2;
                    else
                        state = 1;
                    break;
                case 2:
                    if (str[i] == '0')
                        state = 0;
                    else
                        state = 3;
                    break;
                case 3:
                    if (str[i] == '0')
                        state = 2;
                    else
                        state = 1;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 2 || state == 1 || state == 0)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 8:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 0;
                    else
                        state = 2;
                    break;
                case 2:
                    if (str[i] == 'a')
                        state = 3;
                    else
                        state = 1;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 2;
                    else
                        state = 0;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 0)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 9:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == '0')
                        state = 1;
                    else
                        state = 0;
                    break;
                case 1:
                    if (str[i] == '0')
                        state = 2;
                    else
                        state = 1;
                    break;
                case 2:
                    if (str[i] == '0')
                        state = 2;
                    else
                        state = 2;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 2)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 10:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == '0')
                        state = 1;
                    else
                        state = 0;
                    break;
                case 1:
                    if (str[i] == '0')
                        state = 2;
                    else
                        state = 1;
                    break;
                case 2:
                    if (str[i] == '0')
                        state = 3;
                    else
                        state = 2;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 3;
                    else
                        state = 3;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 0 || state == 1 || state == 2)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 11:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == '0')
                        state = 1;
                    else
                        state = 0;
                    break;
                case 1:
                    if (str[i] == '0')
                        state = 2;
                    else
                        state = 1;
                    break;
                case 2:
                    if (str[i] == '0')
                        state = 3;
                    else
                        state = 2;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 3;
                    else
                        state = 3;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 2)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 12:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 0;
                    else
                        state = 2;
                    break;
                case 2:
                    if (str[i] == 'a')
                        state = 3;
                    else
                        state = 1;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 2;
                    else
                        state = 0;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 1)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 13:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 0;
                    else
                        state = 2;
                    break;
                case 2:
                    if (str[i] == 'a')
                        state = 3;
                    else
                        state = 1;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 2;
                    else
                        state = 0;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 2)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 14:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == 'a')
                        state = 1;
                    else
                        state = 3;
                    break;
                case 1:
                    if (str[i] == 'a')
                        state = 0;
                    else
                        state = 2;
                    break;
                case 2:
                    if (str[i] == 'a')
                        state = 3;
                    else
                        state = 1;
                    break;
                case 3:
                    if (str[i] == 'a')
                        state = 2;
                    else
                        state = 0;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 3)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 15:
            for (i = 0; str[i] != '\0'; i++)
            {
                switch (state)
                {
                case 0:
                    if (str[i] == '0')
                        state = 1;
                    else
                        state = 2;
                    break;
                case 1:
                    if (str[i] == '0')
                        state = 3;
                    else
                        state = 2;
                    break;
                case 2:
                    if (str[i] == '0')
                        state = 1;
                    else
                        state = 4;
                    break;
                case 3:
                    if (str[i] == '0')
                        state = 3;
                    else
                        state = 2;
                    break;
                case 4:
                    if (str[i] == '0')
                        state = 1;
                    else
                        state = 4;
                    break;
                }
                printf("\nThe string is in state %d", state);
            }
            if (state == 3 || state == 4)
                printf("\nIt is in final state.\n");
            else
                printf("\nIt is not in final state.\n");
            break;
        case 16:
            exit(0);
        default:
            printf("\n!!!!Wrong Input!!!!\nPlease enter choices between 1 to 16");
        }
    } while (1 == 1);
    return 0;
}