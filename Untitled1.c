#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int id;
    union result
    {
        int jee;
        int neet;
    }marks;
};

struct student Getstudentinfo(char stu_name, int stu_id, int stu_jee, int stu_neet)
{
    struct student information;

    strcpy(information.name,stu_name);
    information.id=stu_id;
    information.marks.jee=stu_jee;
    information.marks.neet=stu_neet;

    return information;
}

void print(struct student information)
{
    printf("%s %d",information.name, information.id);
    printf("%d %d",information.marks.jee, information.marks.neet);
}


int main()
{
    int n,i;

    scanf("%d",&n);

    struct student info[n];

    for(i=0; i<n; i++)
    {
        char name[20];
        int id;
        int jee;
        int neet;

        scanf("%s %d %d %d",name, &id, &jee, &neet);

        info[i] = Getstudentinfo(name, id, jee, neet);
    }

    for(i=0; i<n; i++)
    {
            print(info[i]);
    }
    return 0;
}
