#include<iostream>
#include<stdio.h>
using namespace std;
int CML_u_MatrixMultiplication(float const a_MatrixA[], float const a_MatrixB[], float a_AxB[], int u_dim_Ax, int u_dim_Ay, int u_dim_Bx)
{
  int    u_ret;
  int    i, j, k;  
  float  f_save;

  u_ret = 1;
  if((a_AxB != a_MatrixA) && (a_AxB != a_MatrixB))
  {
    for(i = 0u; i < u_dim_Ay; i++)
    {
      const int colA = (int)i * (int)u_dim_Ax;
      const int colAxB = (int)i * (int)u_dim_Bx;
      for(j = 0u; j < u_dim_Bx; j++)
      {
        f_save = 0.f;
        for(k = 0u; k < u_dim_Ax; k++)
        {
          f_save+= a_MatrixA[colA + k] * a_MatrixB[j + (k*u_dim_Bx)];
        }
        a_AxB[j + colAxB] = f_save;
      }
    }
  }
  else
  {
    u_ret = 0;
  } 

  return u_ret;  
}
void main()
{
	float A[6]={1,2,3,4,5,6};
	float B[6]={1,1,1,2,3,1};
	float C[10]={0};
	int dim1=2;
	int dim2=3;
	int dim3=3;

	CML_u_MatrixMultiplication(A,B,C,dim1,dim2,dim3);
	
	

}
//void main()
//{
//	int *p;
//
//	char *c="srinivas";
//
//	int x=20;
//
//	p=&x;
//
//	cout<<sizeof(c)<<endl;
//	cout<<sizeof(*c)<<endl;
//
//	
//	
//
//}