#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct student
{
int id;
char name[50];
};

void addStudent()
{
FILE *fp=fopen("student.txt","a");
struct student s;

printf("enter ID:");
scanf("%d",&s.id);
printf("enter name:");
scanf("%[^\n]",s.name);

fprintf(fp, "%d %s\n",s.id,s.name);
fclose(fp);

printf("Student added successfully!\n");
}
 void displayStudents()
{
FILE *fp = fopen("student.txt","r");
struct student s;

printf("\n---Student List ---\n");
while(fscanf(fp, "%d %[^\n]",&s.id,s.name) !=EOF)
{
printf("ID: %d | Name: %s\n",s.id, s.name);
}

fclose(fp);
}
 void searchStudent()
{
FILE *fp = fopen("students.txt", "r");
struct student s;
int id,found =0;

printf("Enter ID to search:");
scanf("%d", &id);

while(fscanf(fp,"%d %[^\n]", &s.id,s.name) != EOF)
{
if (s.id ==id)
{
printf("Found:ID: %d |Name: %s\n", s.id,s.name);
found = 1;
}
}

if(!found)
printf("student not found!\n");
fclose(fp);
}
 void deleteStudent() 
{
FILE *fp = fopen("student.txt", "r");
FILE *temp = fopen("temp.txt","w");

struct student s;
int id,found = 0;

printf("Enter ID to delete: ");
scanf("%d",&id);

while (fscanf(fp, "%d %[^\n]", &s.id, s.name) != EOF)
{
if (s.id !=id)
{
fprintf(temp, "%d %s\n", s.id, s.name);
}
else
{
found=1;
}
}
fclose(fp);
fclose(temp);

remove("students.txt");
rename("temp.txt","students.txt");

if(found)
printf("Student deleted successfully!\n");
else
printf("Student not found!\n");
}

int main()
{
int choice;

while(1)
{
printf("\n---Student Management System---\n");
printf("1.Add Student\n");
printf("2.Display students\n");
printf("3.Search student\n");
printf("4.Delete Student\n");
printf("5.Exit\n");

printf("Enter choice: ");
scanf("%d",&choice);

switch (choice)
{
case 1:addStudent();break;
case 2:displayStudents();

break;
case 3: searchStudent();

break;
case 4: deleteStudent();

break;
case 5: exit(0);
default: printf("Invalid choice!\n");
}
}
return 0;
}
