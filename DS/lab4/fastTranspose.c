#include<stdio.h>
struct
{
    int r,c,v;
}s[100],t[100];
void read()
{
    int m,n,ele,k=0;
    printf("Enter order of matrix : ");
    scanf("%d %d",&m,&n);
    printf("Enter elements of matrix : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ele);
            if(ele==0)
                continue;
            s[++k].r=i;
            s[k].c=j;
            s[k].v=ele;
        }
    }
    s[0].r=m;
    s[0].c=n;
    s[0].v=k;
}
void transpose()
{
    int rowCount[100]={0},startPos[100],cols=s[0].c,val=s[0].v;
    t[0].r=cols;
    t[0].c=s[0].r;
    t[0].v=val;
    for (int i = 1; i <= val; i++)
        rowCount[s[i].c]++;
        startPos[0] = 1;
    for (int i = 1; i < cols; i++)
        startPos[i] = startPos[i - 1] + rowCount[i - 1];
    for (int i = 1; i <= val; i++)
    {
        int pos = startPos[s[i].c]++;
        t[pos].r = s[i].c;
        t[pos].c = s[i].r;
        t[pos].v = s[i].v;
    }
}

void display()
{
    int k=1;
    printf("\nTranspose of the matrix : \n");
    for(int i=0;i<t[0].r;i++)
    {
        for(int j=0;j<t[0].c;j++)
        {
            if(i==t[k].r && j==t[k].c)
            {
                printf("%d   ",t[k].v);
                k++;
            }
            else
                printf("0   ");
        }
        printf("\n");
    }
}
void main()
{
    read();
    transpose();
    display();
}
