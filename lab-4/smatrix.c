#include<stdio.h>

int main()
{
int a[3][3] = { {1,0,0},{0,2,0}, {0,0,3} };
int count = 0;
int size = 9;


for (int i = 0; i < 3; i++){

for (int j = 0; j < 3; j++){

if (a[i][j] == 0){
count++;
  }
 }
}

if (count > size / 2){
printf("Sparse matrix");
 }
else{
printf("Not a Sparse matrix");
}

return 0;

}

