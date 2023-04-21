#include<stdio.h>

    struct stud {
    int roll;
    char name[25];
    int age;
    struct stud *next;
    };

/* A user-defined data type called “node” */
typedef struct stud node;

//function to create a linked list and return its head
node *create_list()
{
    int k, n;
    node *p, *head;
    printf ("\n How many elements to enter?");
    scanf ("%d", &n);

    for (k=0; k<n; k++)
    {
        if (k == 0) {
        head = (node *) malloc(sizeof(node));
        p = head;}
        else {
        p->next = (node *) malloc(sizeof(node));
        p = p->next;
        }
        scanf ("%d %s %d", &p->roll, p->name, &p->age);
    }
    p->next = NULL;
    return (head);
}

//function to traverse a list
void display (node *head)
{    
    int count = 1;
    node *p;
    p = head;
    while (p != NULL)
    {
        printf ("\nNode %d: %d %s %d", count,
        p->roll, p->name, p->age);
        count++;
        p = p->next;
    }
    printf ("\n");
}

void insert (node **head)

{
    int k = 0, rno;
    node *p, *q, *new;
    new = (node *) malloc(sizeof(node));
    printf ("\nData to be inserted: ");
    scanf ("%d %s %d", &new->roll, new->name, &new->age);
    printf ("\nInsert before roll w:");
    scanf ("%d", &rno);
    p = *head;
    if (p->roll == rno) /* At the beginning */
    {
        new->next = p;
        *head = new;
    }
    else
    {
        while ((p != NULL) && (p->roll != rno))
        {
        q = p;
        p = p->next;
        }
        if (p == NULL) /* At the end */
        {
        q->next = new;
        new->next = NULL;
        }
        else if (p->roll == rno)
        {
        q->next = new;
        new->next = p;
        }

    }

}

int main()
{





    return 0;
}