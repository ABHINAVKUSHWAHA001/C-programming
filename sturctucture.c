#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    int id;
    int marks;

} ;
int main()
{
    struct student abhi, kishan;
        strcpy(abhi.name,"tht");
    abhi.id=5;
    kishan.id=6;
    abhi.marks=99;
    kishan.marks=0;
    printf(" abhi\nname:%s\nid:%d\nmarks:%d",abhi.name,abhi.id,abhi.marks);
    return 0;
}
