#include <stdio.h>

struct student{
    char name[20];
    int id;
    union result{
        int jee;
        int neet;
    }mark;
};

void Getstudentinfo(struct student stud1[],int n)
{
    int i,j=0,k=0;
    char r,z;
    
    for(i=0;i<n;i++)
    {
        printf("\nenter student name:");
        scanf("%s",stud1[i].name);
        
        printf("enter student id:");
        scanf("%d",&stud1[i].id);
        
        printf("enter j for jee or n for neet:");
        r=getchar();
        z=getchar();
        
        if(z=='j'||z=='J')
        {
          printf("enter mark of JEE:");
          scanf("%d",&stud1[i].mark.jee);
        }
        else if(z=='n'||z=='N')
        {
          printf("enter mark of NEET:");
          scanf("%d",&stud1[i].mark.neet);
        }
        else
          printf("enter proper character:");
        
    }
    
    //return stud1;
}

void Print_detail(struct student stud2[],int n)
{
     int i=0,max=0,pos;
    
     for(i=0;i<n;i++);
     {
          if(max<stud2[i].mark.jee) 
               max=stud2[i].mark.jee;
               pos=i;
     }
    
     printf("\ndetails of student who got the highest marks in JEE\n\n");
         printf("student name\tstudent id\tjee marks\n");
    
     printf("%s\t\t%d\t\t%d\n",stud2[pos].name,stud2[pos].id,stud2[pos].mark.jee);
}

void Count_student(struct student stud3[],int n)
{
     int i,j,jee=0,neet=0,r;
     
     for(i=0;i<n;i++)
     {
          if(stud3[i].mark.jee>0)
               jee++;
               
          else
               neet++;
     }
     
     printf("\ntotal no. of jee student:%d",jee);
     printf("\ntotal no. of neet student:%d",neet);
}

int main()
{
    int n,i;
    struct student stud[100];
    
    
    printf("enter total no. of student:");
    scanf("%d",&n);
    
    Getstudentinfo(stud,n);
    Print_detail(stud,n);
    Count_student(stud,n);

    return 0;
}




