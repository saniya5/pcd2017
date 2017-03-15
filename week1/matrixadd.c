#include<stdio.h>
void get_matrix(int m,int n,float a[m][n])
     {
     for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
          printf("a[%d][%d]=",i,j);
          scanf("%f",&a[i][j]);
         }
         }
}


void show_matrix(int m,int n,float a[m][n])
{
 for (int i=0;i<m;i++){
 for (int j=0;j<n;j++){
 printf("elements are %f",a[i][j]);
 }
 }
}

void addmatrix(int m,int n,int a[m][n],int b[m][n],int c[m][n])
{
 for (int i=0;i<m;i++){
 for (int j=0;j<n;j++){
   c[i][j]=a[i][j]+b[i][j];
   }
  }
}

int main()
{
 int m,n;
 printf("enter the order matrix\n");
 scanf("%d%d",&m,&n);
 float x[m][n];
 get_matrix(m,n,x);
 show_matrix(m,n,x);
 return 0;
}


