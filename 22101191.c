#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct
{
    char name[20];
    int number;
} Members;

Members members[MAX];

void sortMembers(int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (members[i].number < members[j].number)
            {
                Members temp = members[i];
                members[i] = members[j];
                members[j] = temp;
            }
        }
    }
}

void addMember(int *count)
{
    if (*count >= MAX)
    {
        printf("Member list is full.\n");
        return;
    }
    printf("Enter member name: ");
    scanf("%s", members[*count].name);
    printf("Enter member number: ");
    scanf("%d", &members[*count].number);
    (*count)++;
    printf("Member added successfully.\n");
    return;
}

void displayMembers(int count)
{
    if (count == 0)
    {
        printf("No members to display.\n");
        return;
    }
    printf("Members List:\n");
    sortMembers(count);
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s, Number: %d\n", members[i].name, members[i].number);
    }
    return;
}

void searchMember(int count)
{
    char name[20];
    printf("Enter member name to search: ");
    scanf("%s", name);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(members[i].name, name) == 0)
        {
            printf("Member found: Name: %s, Number: %d\n", members[i].name, members[i].number);
            return;
        }
    }
    printf("Member not found.\n");
    return;
}

void deleteMember(int *count)
{
    char name[20];
    printf("Enter member name to delete: ");
    scanf("%s", name);
    for (int i = 0; i < *count; i++)
    {
        if (strcmp(members[i].name, name) == 0)
        {
            for (int j = i; j < *count - 1; j++)
            {
                members[j] = members[j + 1];
            }
            (*count)--;
            printf("Member deleted successfully.\n");
            return;
        }
    }
    printf("Member not found.\n");
    return;
}

int main()
{
    int choice, count = 0;
    do
    {
        printf("\nMenu:\n");
        printf("1. Add Member\n");
        printf("2. Display Members\n");
        printf("3. Search Member\n");
        printf("4. Delete Member\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addMember(&count);
            break;
        case 2:
            displayMembers(count);
            break;
        case 3:
            searchMember(count);
            break;

        case 4:
            deleteMember(&count);
            break;
        case 5:
            printf("Exiting...\n");
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}