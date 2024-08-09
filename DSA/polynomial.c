#include<stdlib.h>
#include <stdio.h>
struct Poly
{
    int coffi,power;
    struct Poly *next;
};
struct Poly *Head_1,*Head_2,*ResPoly;
void AddPoly()
{
    struct Poly *N_1,*N_2,*N,*T;
    N_1=Head_1;
    N_2=Head_2;
    ResPoly=NULL;
    while(N_1!=NULL && N_2 !=NULL)
    {
        T=(struct Poly *)malloc(sizeof(struct Poly));
        T->next=NULL;
     if(N_1->power>N_2->power)   
     {
         T->coffi=N_1->coffi;
         T->power=N_1->power;
         N_1=N_1->next;
     }
     else if(N_1->power<N_2->power)
     {
         T->coffi=N_2->coffi;
         T->power=N_2->power;
         N_2=N_2->next;
     }
     else
     {
        T->coffi=N_1->coffi+N_2->coffi;
        T->power=N_1->power;
        N_2=N_2->next;
        N_1=N_1->next;
     }
    if(ResPoly==NULL)
        ResPoly=T;
    else
    {
        N=ResPoly;
	while(N->next!=NULL)
		 { N=N->next;}
	N->next=T;
    }
}

N=ResPoly;
while(N->next!=NULL)
    N=N->next;
if (N_2==NULL)
{
    N->next=N_1;
}
if (N_1==NULL)
{
    N->next=N_2;
}
}
void Display(int i)
{
    struct Poly *N;
 if(i==1)
 {
     N=Head_1;
     while(N!=NULL)
     {
      printf("\n Coffi=%d Power=%d",N->coffi,N->power);
      N=N->next;
     }
 }
 if(i==2)
 {
     N=Head_2;
     while(N!=NULL)
     {
      printf("\n Coffi=%d Power=%d",N->coffi,N->power);
      N=N->next;
     }
 }
 if(i==3)
 N=ResPoly;
 while(N!=NULL)
    {
        printf(" \n Coffi=%d Pow=%d",N->coffi,N->power);
        N=N->next;
    }
}
void main() 
{
struct Poly *T,*N;
Head_1=NULL;
Head_2=NULL;
int n_1=4,n_2=3,i;
for(int i=1;i<=n_1;i++)
{
    T=(struct Poly *)malloc(sizeof(struct Poly));
    scanf("%d %d",&T->coffi,&T->power);
    T->next=NULL;
    if (Head_1==NULL)
        Head_1=T;
    else
    {
        N=Head_1;
        while(N->next!=NULL)
            N=N->next;
        N->next=T;
    }
}

i=1;
Display(i);
for(int i=1;i<=n_2;i++)
{
    T=(struct Poly *)malloc(sizeof(struct Poly));
    scanf("%d %d",&T->coffi,&T->power);
    T->next=NULL;
    if (Head_2==NULL)
        Head_2=T;
    else
    {
        N=Head_2;
        while(N->next!=NULL)
            N=N->next;
        N->next=T;
    }
}

i=2;
Display(i);
AddPoly();
printf("\n Polynomials Added");
i=3;
Display(i);
}