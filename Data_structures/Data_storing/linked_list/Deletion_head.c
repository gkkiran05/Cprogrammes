//programme to delete element in linked list at starting 
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
    
    //deletion of element at starting position
    temp = head;
    head = head -> next;
    temp -> next = NULL;
    
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



/*
 *
 *
           out put
----------------------------
Enter The Value:5
Enter c for continue , e for exit:c
Enter The Value:10
Enter c for continue , e for exit:c
Enter The Value:20
Enter c for continue , e for exit:c
Enter The Value:30
Enter c for continue , e for exit:40
Elements before insertion
5 10 20 30
Elements After insertion
10 20 30


*/
