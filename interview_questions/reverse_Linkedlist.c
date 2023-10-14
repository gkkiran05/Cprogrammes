#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head, *tail, *new, *temp;

void printlist(struct node *head)
{
    // Printing
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nNumber Of elements: %d\n", count);
}

void reverseAndPrint(struct node **head)
{
    struct node *prev = NULL;
    struct node *current = *head;
    struct node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

int main()
{
    // Declaration
    int value;
    char ch;
    do
    {
        printf("Enter the value: ");
        scanf("%d", &value);
        new = (struct node *)malloc(sizeof(struct node));

        new->data = value;
        new->next = NULL;

        if (head == NULL)
        {
            head = new;
            tail = new;
        }
        else
        {
            tail->next = new;
            tail = new;
        }
        printf("Enter C for continue: ");
        scanf(" %c", &ch);

    } while (ch == 'c' || ch == 'C');

    printf("Original linked list: ");
    printlist(head);

    reverseAndPrint(&head);
    printf("Reversed linked list: ");
    printlist(head);

    return 0;
}




/*
          out put
------------------------------

Enter the value: 10
Enter C for continue: c
Enter the value: 20
Enter C for continue: c
Enter the value: 30
Enter C for continue: c
Enter the value: 40
Enter C for continue: d
Original linked list: 10 20 30 40
Number Of elements: 4
Reversed linked list: 40 30 20 10
Number Of elements: 4


*/
