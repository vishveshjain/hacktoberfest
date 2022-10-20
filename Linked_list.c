#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct node Node;

struct node
{
    int num;
    Node *next;

}*head;

void create_node();
void Insert_Begin(int num);
void Insert_End(int num);
void insert_Middle(int num,int pos);
void delete_begin();
void delete_end();
void delete_mid();
void delete_all();
void display();

int main()
{
    system("CLS");
    int c,ch,num,pos;
    printf("\t\t\t\t1. Create Node\n\t\t\t\t2. Insert\n\t\t\t\t3. Delete\n\t\t\t\t4. Display\n\t\t\t\t5. Exit\n\n");
    printf("\t\t\t\tEnter choice: ");
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        create_node();
        break;
    case 2:
        system("CLS");
        printf("\t\t\t\t1. Insert In First\n");
        printf("\t\t\t\t2. Insert In End\n");
        printf("\t\t\t\t3. Insert In Middle\n\n");
        printf("\t\t\t\tEnter Choice: ");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("\n\t\t\t\tEnter Value: ");
            scanf("%d", &num);
            Insert_Begin(num);
            getch();
            main();
        }
        else if(ch==2)
        {
            printf("\n\t\t\t\tEnter Value: ");
            scanf("%d", &num);
            Insert_End(num);
            getch();
            main();
        }
        else if(ch==3)
        {
            printf("\n\t\t\t\tEnter Value: ");
            scanf("%d", &num);
            printf("\n\t\t\t\tEnter Position: ");
            scanf("%d", &pos);
            insert_Middle(num,pos);
            main();
        }
        else
        {
            printf("\n\t\t\t\tWrong Choice!!\n");
            getch();
            main();
        }
        break;
    case 3:
        system("CLS");
        printf("\n\t\t\t\t1. Delete From Begin\n");
        printf("\n\t\t\t\t2. Delete From End\n");
        printf("\n\t\t\t\t3. Delete From Middle\n");
        printf("\n\t\t\t\t4. Delete All Node\n\n");
        printf("\n\t\t\t\tEnter choice:");
        scanf("%d", &ch);
        if(ch==1)
        {
            delete_begin();
        }
        else if(ch==2)
        {
            delete_end();
        }
        else if(ch==3)
        {
            delete_mid();
        }
        else if(ch==4)
        {
            delete_all();
        }
        else
        {
            printf("\n\t\t\t\tWrong Choice!!");
            getch();
            main();
        }
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
    default:
        printf("\n\t\t\t\tWrong Choice!!!\n\n\t\t\t\tTry Again");
        getch();
        main();
    }
    return 0;
}
void create_node()
{
    Node *fnode, *tmp;
    int num;
    int i,n;
    head=(Node*)malloc(sizeof(Node));
    if(head==NULL)
    {
        printf("\n\t\t\t\tMemory can not be allocated");
    }
    else
    {
        printf("\n\t\t\t\tEnter the number of nodes:");
        scanf("%d", &n);
        printf("\n\t\t\t\tEnter data for node 1:");
        scanf(" %d", &num);
        head->num=num;
        head->next=NULL;
        tmp=head;
        for(i=2; i<=n; i++)
        {
            fnode=(Node*)malloc(sizeof(Node));
            if(fnode==NULL)
            {
                printf("\n\t\t\t\tMemory can not be allocated");
                break;
            }
            else
            {
                printf("\n\t\t\t\tEnter data for node %d:", i);
                scanf(" %d", &num);
                fnode->num=num;
                fnode->next=NULL;
                tmp->next=fnode;
                tmp=tmp->next;
            }
        }
        main();
    }
}
void Insert_Begin(int num)
{
    Node *fnode;
    fnode = (Node*)malloc(sizeof(Node));
    if(fnode == NULL)
    {
        printf("\n\t\t\t\tMemory can not be allocated.");
    }
    else
    {
        fnode->num = num;
        fnode->next = head;
        head = fnode;
        printf("\n\t\t\t\tInsert Successful");
    }
}
void Insert_End(int num)
{
    Node *fnode, *tmp;
    fnode = (Node*)malloc(sizeof(Node));
    if(fnode == NULL)
    {
        printf("\n\t\t\t\tMemory can not be allocated.");
    }
    else
    {
        fnode->num = num;
        fnode->next = NULL;
        tmp = head;
        while(tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = fnode;
        printf("\n\t\t\t\tInsert Successful");
    }
}
void insert_Middle(int num, int pos)
{
    int i;
    Node *fnode, *tmp;
    fnode = (Node*)malloc(sizeof(Node));
    if(fnode == NULL)
    {
        printf("\n\t\t\t\tMemory can not be allocated.");
    }
    else
    {
        fnode->num = num;
        fnode->next = NULL;
        tmp = head;

        for(i=2; i<=pos-1; i++)
        {
            tmp = tmp->next;

            if(tmp == NULL)
            {
                break;
            }
        }
        if(tmp != NULL)
        {
            fnode->next = tmp->next;
            tmp->next = fnode;
        }
        else
        {
            printf("\n\t\t\t\tInsert is not possible to the given position.\n");
            getch();
            main();
        }

    }

}
void delete_begin()
{
    Node *tmp;
    if(head==NULL)
    {
        printf("\n\t\t\t\tList is Empty\n");
        getch();
        main();
    }
    else
    {
        tmp=head;
        head=head->next;
        printf("\n\t\t\t\tData %d Deleted Successfully\n", tmp->num);
        free(tmp);
        tmp=head;
        printf("\n\t\t\t\tAfter Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %d %p\n",tmp, tmp->num, tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }

}
void delete_end()
{
    Node *tmp,*q;
    if(head==NULL)
    {
        printf("\n\t\t\t\tList is Empty\n");
        getch();
        main();
    }
    else
    {
        tmp=head;
        while(tmp->next!=NULL)
        {
            q=tmp;
            tmp=tmp->next;
        }
        if(tmp==head)
        {
            head=NULL;
        }
        else
        {
            q->next=NULL;
        }
        printf("\n\t\t\t\tData %d Deleted Successfully\n", tmp->num);
        free(tmp);
        tmp=head;
        printf("\n\t\t\t\tAfter Deleted Data from list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %d %p\n",tmp, tmp->num, tmp->next);
            tmp=tmp->next;
        }
        getch();
        main();
    }

}
void delete_mid()
{
    int pos,i;
    Node *tmp,*prev;
    if(head==NULL)
    {
        printf("\n\t\t\t\tList Is Empty\n");
        getch();
        main();
    }
    else
    {
        printf("\n\t\t\t\tEnter The Position:");
        scanf("%d", &pos);
        tmp=head;
        prev=head;
        for(i=2; i<=pos; i++)
        {
            prev=tmp;
            tmp=tmp->next;

            if(tmp==NULL)
                break;
        }
        if(tmp!=NULL)
        {
            if(tmp==head)
            {
                head=head->next;
            }
            prev->next=tmp->next;
            tmp->next=NULL;
            printf("\n\t\t\t\tData %d Deleted Successfully From Position %d\n", tmp->num,pos);
            free(tmp);
            tmp=head;
            printf("\n\t\t\t\tAfter Deleted Data from list:\n\n");
            while(tmp!=NULL)
            {
                printf("\t\t\t\tDATA = %p %d %p\n",tmp, tmp->num, tmp->next);
                tmp=tmp->next;
            }
            getch();
            main();
        }
        else
        {
            printf("\n\t\t\t\tDeletion Can't Be Possible For this position\n");
            getch();
            main();
        }
    }

}
void delete_all()
{
    Node *tmp;
    while(head!=NULL)
    {
        tmp=head;
        head=head->next;
        free(tmp);
    }
    printf("\n\t\t\t\tSuccessfully Deleted All Nodes %c%c%c\n", 1,1,1);
}
void display()
{
    Node *tmp;
    if(head==NULL)
    {
        printf("\n\t\t\t\tList is empty");
        getch();
        main();
    }
    else
    {
        tmp=head;
        printf("\n\t\t\t\tData Entered in list:\n\n");
        while(tmp!=NULL)
        {
            printf("\t\t\t\tDATA = %p %d %p\n",tmp, tmp->num, tmp->next);
            tmp=tmp->next;
        }
    }
    getch();
    main();
}
