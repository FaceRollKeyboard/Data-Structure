#include <stdio.h>
#include <stdlib.h>
#include "slinklist.h"
linklist delx(linklist head,datetype x)
{
    linklist *pre = NULL;

    if(!head)
        printf("list is empty");
    linklist p =head;
    while (p&&p->info!=x)
    {
        pre = p;
        p=p->next;
    }
    if(p)//ур╣╫ак
        {
            pre->next = p->next;
            free(p);
            return 0;
        }
    if(!pre)
    {
        return 0;
    }


}
/*
int main()
{
    printf("Hello world!\n");
    return 0;
}
*/
