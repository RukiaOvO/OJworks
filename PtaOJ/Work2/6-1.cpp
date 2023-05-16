#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* buildLinkedList(int* arr, int n);

struct Node* getMax(struct Node* head);

int main(int argc, char const *argv[]) 
{
    int *a, n, i;
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    struct Node* head = NULL;

    head = buildLinkedList(a, n);

    struct Node* pMax = getMax(head);
    if (pMax)
        printf("%d\n", pMax->data);
    else
        printf("-1\n");

    free(a);

    return 0;
}

struct Node* buildLinkedList(int* arr, int n)
{
    Node* h = new Node;
    h->next = NULL;
    Node* pre = new Node;
    pre = h;

    for(int i = 0; i < n; i++)
    {
        Node* temp = new Node;
        temp->data = arr[i];

        pre->next = temp;
        pre = temp;

        temp->next = NULL;
    }
    
    return h;
}

struct Node* getMax(struct Node* head)
{
    Node* temp = head->next;

    Node* max_node = temp;
    while(temp != NULL)
    {
        if(max_node->data < temp->data)
        {
            max_node = temp;
        }

        temp = temp->next;
    }

    return max_node;
}