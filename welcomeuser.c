
#include <stdio.h>
#include <stdlib.h>

void getNameFromUser(char *buffer, int size)
{
    printf("Enter your name: ");
    fgets(buffer, size, stdin);
}

void getAgeFromUser(int *age)
{
    printf("Enter your age: ");
    scanf("%d", age);
}

int* getIntegerPointer()
{
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr != NULL)
    {
        *ptr = 42;
    }
    return ptr;
}

int main()
{
    printf("Welcome to my program!\n");

    char szName[100];
    getNameFromUser(szName, sizeof(szName));

    int age;
    getAgeFromUser(&age);

    printf("Welcome %s", szName);
    printf("Your age is: %d\n", age);

    int *pNumber = getIntegerPointer();
    if (pNumber != NULL)
    {
        printf("The number is: %d\n", *pNumber);
        free(pNumber);
    }
    else
    {
        printf("Memory allocation failed!\n");
    }
}