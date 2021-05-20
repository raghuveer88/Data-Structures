#include<stdio.h>

float det_matrix(float a[2][2], int r, int c)
{
float det;
int temp;
if (r == 2)
{
det =  ((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));

}



return det;

}

void inverse_matrix(float a[2][2], int r, int c,float det)
{

if (r == 2)
{
int temp = 0;

temp = a[0][0];
a[0][0] = a[1][1];
a[1][1] = temp;




a[1][0] = -a[1][0];
a[0][1] = -a[0][1];

for (int i = 0; i < r; i++)
{
for (int j = 0; j < c; j++)
{
a[i][j] = a[i][j] / det;
}
}

}


}

void print_matrix(float a[2][2], int r, int c)
{
for (int i = 0; i < r; i++)
{
for (int j = 0; j < c; j++)
{
printf("%f    ", a[i][j]);

}
printf("\n");

}

}

int main()
{
float a[2][2] = { {4,7},{2,6}};
float det = 0;

det = det_matrix(a, 2, 2);
inverse_matrix(a, 2, 2, det);
print_matrix(a, 2, 2);

//printf("%f", det);





}

