//programme to delete element in linked list at Ending 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*new, *head, *tail;

int main()
{
    int value;
    char ch;
    do
    {
        new = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter The Value:");
        scanf("%d", &value);
        
        new -> data = value;
        new -> next = NULL;
        
        if(head == NULL)
        {
            head = new;
            tail = new;
        }
        else
        {
            tail -> next = new;
            tail = new;
        }
        printf("Enter c for continue , e for exit:");
        scanf(" %c", &ch);
    }while(ch == 'c');
    
    //printing the list
    struct node *temp = head;
    printf("Elements before deletion\n");
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
    
    //deletion of element at Ending position
    temp = head;
    while(temp -> next != tail)
    {
        temp = temp -> next;
    }
    temp -> next = NULL;
    tail = temp;
    
    //printing the elements after deleting
    printf("Elements After deletion\n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
    
    return 0;
}
