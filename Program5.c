#include <stdio.h>

int main(int argc, char const *argv[])
{

    int day;
    printf("enter day(1-7):");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("thuraday\n");
        break;
    case 5:
        printf("friady\n");

        break;
    case 6:
        printf("satudary\n");
        break;
    case 7:
        printf("sunday\n");
        break;
        ;
    default:
        printf("not valid day\n");
        break;
    }
    return 0;
}
