
struct Node {
    int data;
    struct Node *next;
};
typedef struct Node node;

node *create_list()
{
    int k, n;
    node *p, *head;
    printf ("\n How many elements to enter?");
    scanf ("%d", &n);

    for (k=0; k<n; k++)
    {
        if (k == 0) 
        {
            head = (node *) malloc(sizeof(node));
            p = head;
        }
        else {
            p->next = (node *) malloc(sizeof(node));
            p = p->next;
        }
    scanf ("%d ", &p->data);
    }
    p->next = head;
    return (head);
}

int main()
{
    
    return 0;
}