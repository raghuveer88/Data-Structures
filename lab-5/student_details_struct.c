#include<stdio.h>

struct studentID{
    char* name;
    int roll_no;
    int marks;
};

int main(){
struct studentID s;

s.name = "D S Raghuveer";
s.roll_no = 18518;

printf("student name : %s\n",s.name);
printf("roll_no : %d",s.roll_no);

    return 0;
}