/*
 reg:CT101/G/22150/24
name:byron lincoln
*/

#include <stdio.h> 

#include<string.h>
struct employee {
char name[25];
int id;
char department [20];
float salary;
char email [50];
}employee;
int main(){
strcpy(employee.name,"John Doe");
employee.id=12345;
strcpy(employee.department,"Human resources");
employee.salary=55000.50;
strcpy(employee.email, "john.doe@company.com");
printf ("Enter name =%s",employee.name);
printf ("Enter id=%i",employee.id);
printf ("Enter department=%s",employee.department );
printf ("Enter salary=%f",employee.salary);
printf ("Enter email=%s",employee.email);
return 0;
}