#include <stdio.h>
int main()
{ int i,j,k,n=9,m;
  int a[9][9];
  for(i=0;i<9;i++)
  {
      for(j=0;j<9;j++)
      {
          a[i][j]=1;
      }
  }
//printf("enter the size");
//scanf("%d",&n);
if((n/2)*2==n)
{
    printf("error");
}
printf("SQUARE:::");
printf("enter the size of sqare::");
scanf("%d",&m);
for (i=(n/2)-m;i<=(n/2)+m;i++)
    {
    for (j=(n/2)-m;j<=(n/2)+m;j++)
    {     a[i][j]=6;
    }
    }
    printf("output for square is :::::");
      for(i=0;i<9;i++)
      {
          printf("\n");
      for(j=0;j<9;j++)
      {
          printf(" ");
          printf("%d",a[i][j]);
      }
  }
  
    for(i=0;i<9;i++)
  {
      for(j=0;j<9;j++)
      {
          a[i][j]=1;
      }
  }
    
printf("\n");
printf("DIAMOND::::");
printf("enter the size of dimond::");
scanf("%d",&m);
for(i=0;i<=m;i++)
{
    for(j=(-1*i);j<=i;j++)
    {
        a[(n/2)-(m-i)][(n/2)+j]=7;
    }
}

for(i=m-1;i>=0;i--)
{
    for(j=(-1*i);j<=i;j++)
    {
        a[(n/2)+(m-i)][(n/2)+j]=7;
    }
}

      for(i=0;i<9;i++)
      {
          printf("\n");
      for(j=0;j<9;j++)
      {
          printf(" ");
          printf("%d",a[i][j]);
      }
    }
    
        for(i=0;i<9;i++)
  {
      for(j=0;j<9;j++)
      {
          a[i][j]=1;
      }
  }
    printf("\n");
    printf("TRIANGLE::::");
    printf("enter the value for triangle:::");
    scanf("%d",&m);
    for(i=(-1*m);i<=m;i++)
    {
    for(j=(-1*(i+m));j<=i+m;j++)
        {
           a[(n/2)+i][(n/2)+j]=9;
                 }
    }
    
          for(i=0;i<9;i++)
         {
          printf("\n");
            for(j=0;j<9;j++)
            {
                printf(" ");
                printf("%d",a[i][j]);
            }
        }
    
           
  }