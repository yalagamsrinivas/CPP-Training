#include<conio.h>
#include<stdio.h>
 
int a[20][20],m;
int determinant(int f[20][20],int a);
int main()
{
  int i,j;
  printf("----------------------------------------------------------------------\n");
  printf("-------------------made by C code champ ------------------------------\n");
  printf("----------------------------------------------------------------------\n");
  printf("\n\nEnter order of matrix : ");
  scanf("%d",&m);
  printf("\nEnter the elements of matrix\n");
  for(i=1;i<=m;i++)
  {
  for(j=1;j<=m;j++)
  {
  printf("a[%d][%d] = ",i,j);
  scanf("%d",&a[i][j]);
  }
  }
  
  printf("\n Determinant of Matrix A is %d .",determinant(a,m));
  getch();
}
 
int determinant(int f[20][20],int x)
{
  int pr,c[20],d=0,b[20][20],j,p,q,t;
  if(x==2)
  {
    d=0;
    d=(f[1][1]*f[2][2])-(f[1][2]*f[2][1]);
    return(d);
   }
  else
  {
    for(j=1;j<=x;j++)
    {       
      int r=1,s=1;
      for(p=1;p<=x;p++)
        {
          for(q=1;q<=x;q++)
            {
              if(p!=1&&q!=j)
              {
                b[r][s]=f[p][q];
                s++;
                if(s>x-1)
                 {
                   r++;
                   s=1;
                  }
               }
             }
         }
     for(t=1,pr=1;t<=(1+j);t++)
     pr=(-1)*pr;
     c[j]=pr*determinant(b,x-1);
     }
     for(j=1,d=0;j<=x;j++)
     {
       d=d+(f[1][j]*c[j]);
      }
     return(d);
   }
}
