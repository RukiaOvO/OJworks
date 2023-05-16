#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void Print_list(struct Node* head, int n)
{
    struct Node* check_head = head->next;

    if(check_head) printf("size=%d:", n+1);
    while(check_head)
    {
        if(check_head->next == NULL) printf("%d\n", check_head->data);
        else printf("%d ", check_head->data);

        check_head = check_head->next;
    }
}

int main(void)
{
    int times;
    cin >> times;
    getchar();

    for(int i = 1; i <= times; i++)
    {
        int nums;
        cin >> nums;
        getchar();

        struct Node *list_head, *temp_node;
        if(temp_node = new(Node))
        {
            list_head = temp_node;
            list_head->next = NULL;
        }
        struct Node *tail = list_head;

        for(int j = 1; j <= nums; j++)
        {
            if(temp_node = new(Node))
            {
                scanf("%d", &temp_node->data);
                temp_node->next = NULL;

                tail->next = temp_node;
                tail = temp_node;
                tail->next == NULL;
            }
        }
        struct Node *pro_head = list_head;
        int insert_check = 0;

        struct Node* insert_node;
        if(temp_node = new(Node))
        {
            insert_node = temp_node;
            insert_node->next = NULL;
        }
        scanf("%d", &insert_node->data);
        while(pro_head->next)
        {

            if(pro_head->next->data >= insert_node->data)
            {
                insert_node->next = pro_head->next;
                pro_head->next = insert_node;

                break;
            }
            pro_head = pro_head->next;

            if(pro_head->next == NULL)
            {
                pro_head->next = insert_node;
                pro_head = insert_node;
            }
        }


        Print_list(list_head, nums);
    }
}