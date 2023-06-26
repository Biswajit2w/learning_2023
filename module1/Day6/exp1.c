
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
void parse(const char* info,struct Student *students,int size)
{
    int count=0;
    int index=0;
    while (info[index] != '\0')
    {   
        sscanf(&info[index],"%d",&students[count].rollno);
        while(info[index]!=' ')
        {
            index++;
        }
        index++;
        int strindex=0;        
        while(info[index]!=' ')
        {
            students[count].name[strindex++]=info[index++];
        }
        students[count].name[strindex] = '\0';
        index++;
        sscanf(&info[index],"%f",&students[count].marks);
        while (info[index] != ' ' && info[index] != '\0')
         {
            index++;
         }
         index++;
         if(count++ >= size)
         {
            break;
         }
    }
}
int main()
{
    int size;
    const char* info="1001 john 100.00";
    struct Student students[size];
    parse(info,students,size);
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}
