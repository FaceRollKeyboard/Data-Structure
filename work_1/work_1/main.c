#include <stdio.h>
#include <stdlib.h>
#include "sequlist.h"
/*
void reverse (sequence_list *L)
{
    int i;
    int b;//中转变量
    int nowSize=L->size;
    for(i=0;i<nowSize/2;i++)
    {
        b=L->a[i];
        //printf("%d",i);
        //printf("b\n",b);
        L->a[i]=L->a[nowSize-1-i];
        //printf("",);
        L->a[nowSize-1-i]=b;
    }
}
*/
/*
void sprit(sequence_list *L1,sequence_list *L2,sequence_list *L3)
{
    int i;
    int nowSizeL1=L1->size;
    initseqlist(L2);
    initseqlist(L3);
    for(i=0;i<nowSizeL1;i++)
    {
        if((L1->a[i])%2!=0)
        {
            L2->a[L2->size++]=L1->a[i];

        }
        if((L1->a[i])%2==0)//ou
        {
            L3->a[L3->size++]=L1->a[i];
        }
    }
}
*/
void merge (sequence_list *L1,sequence_list *L2,sequence_list *L3)
{
    int i=0,j=0;
    int nowSizeL3=L3->size;
    initseqlist(L3);
    while(i<L1->size&&j<L2->size)
    {
        if(L1->a[i]<=L2->a[j])
        {
            L3->a[nowSizeL3]=L1->a[i++];

        }else
            L3->a[nowSizeL3]=L2->a[j++];
    }
}
int main()
{
    //REVERSE
    /*
    sequence_list L;
    input(&L);
    print(&L);
    reverse(&L);
    print(&L);
    */

    //SPRIT
    /*
    sequence_list L1,L2,L3;
    input(&L1);
    sprit(&L1,&L2,&L3);
    print(&L1);
    printf("\n");
    print(&L2);
    printf("\n");
    print(&L3);
    */

    //merge
    sequence_list L1,L2,L3;
    input(&L1);
    input(&L2);
    merge(&L1,&L2,&L3);
    print(&L3);
}
