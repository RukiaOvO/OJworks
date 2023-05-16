//Copied
#include "stdio.h"
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
int main()
{
    int a,b,c,d,n,i=0,k=0,j;
    struct Node * head,*p,*q,*pr,*L,*L1,*L3;
    scanf("%d",&a);
    j=a;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->next=NULL;
    q=head;
    while(a>0)
    {
        p=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&p->data);
        q->next=p;
        q=p;
        a--;
    }
    q->next=NULL;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&b);
        if(b==0)
        {
            scanf("%d %d ",&c,&d);
            pr=(struct Node *)malloc(sizeof(struct Node));
            pr->data=d;
            L=head->next;
            if(c==0)
            {
                k++;
                pr->next=head->next;
                head->next=pr;
            }
            if(c>0&&c<=j+k)
            {
              while(L!=NULL)
              {
                i++;
                if(i==c)
                    break;
                L=L->next;
               }
            pr->next=L->next;
            L->next=pr;
                k++;
                i=0;
            }
        }
        if(b==1)
        {
            scanf("%d",&c);
            L=head;  
            L1=head;
            if(c>0&&c<=j+k)
            {
                while(L!=NULL)
                {
                    i++;
                    L=L->next;
                    if(i==c)
                      break;
                    L1=L;
                }
                L1->next=L->next;
                i=0;
                j--;
            }
        }
        n--;
    }
    L3=head->next;
    while(L3!=NULL)
    {
        printf("%d ",L3->data);
        L3=L3->next;
    }
    return 0;
}