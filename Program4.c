#include <stdio.h>

int main()
{
    /* code */

    int age;
    printf("enter the age:");
    scanf("%d",&age);

    if(age>18)
    {
        printf("adult\n");
        printf("they can vote\n");
    }
    else{
        printf("not adult");
    }
    
    printf("thank you");
    return 0;
}
