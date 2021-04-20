#include<stdio.h>
#include<stdlib.h>
typedef struct {
        int userID;
        char FristName[25];
        char SecondName[25];
        int day;
       int month;
       int year; //in day,month,year
        int  score;
}student;
void insert1(int x, student nw1,student *ptr1){
x=x+1;
realloc(ptr1,sizeof(student)*x);
int s;
for(s=x-1;s>0;s--)
    {ptr1[s]=ptr1[s-1];}
ptr1[s]=nw1;
printf("enter the ID,First name,Second name,birthday(in day,month,year),score of the new student\n");
scanf("%d %s %s %d %d %d %d",&(ptr1)->userID,&(ptr1)->FristName[25],&(ptr1)->SecondName[25],&(ptr1)->day,&(ptr1)->month,&(ptr1)->year,&(ptr1)->score);

}

       void insert2(int y,student nw2,student *ptr2){
           y=y+1;
           realloc(ptr2,sizeof(student)*y);
           int w;
           for(w=y-1;w>(y/2);w--)
            ptr2[w]=ptr2[w-1];
           ptr2[w]=nw2;
printf("enter the ID,First name,Second name,birthday(in day,month,year),score of the new student\n");
scanf("%d %s %s %d %d %d %d",&(ptr2)->userID,&(ptr2)->FristName[25],&(ptr2)->SecondName[25],&(ptr2)->day,&(ptr2)->month,&(ptr2)->year,&(ptr2)->score);


       }
              void insert3(int z,student nw3, student *ptr3){
                z=z+1;
                realloc(ptr3,sizeof(student)*z);
                ptr3[z]=nw3;
printf("enter the ID,First name,Second name,birthday(in day,month,year),score of the new student\n");
scanf("%d %s %s %d %d %d %d",&(ptr3)->userID,&(ptr3)->FristName[25],&(ptr3)->SecondName[25],&(ptr3)->day,&(ptr3)->month,&(ptr3)->year,&(ptr3)->score);

              }


int main(int argc, char ** argv){

    printf("===================================\n");
    printf("   WELCOME TO STUDENT DATABASE     \n");
    printf("===================================\n");
    printf("\n");

 student *ptr;
int N;
printf("Enter the number of students :\n");
scanf("%d",&N);
ptr=( student *)malloc((N)*sizeof( student));
for(int i=0;i<N;i++){
    printf("Enter the data of student no. %d\n ID then Name then birthday(in day,month,year) then score\n",i+1);
    scanf("%d %s %s %d %d %d %d",&(ptr+i)->userID,&(ptr+i)->FristName[25],&(ptr+i)->SecondName[25],&(ptr+i)->day,&(ptr+i)->month,&(ptr+i)->year,&(ptr+i)->score);
}
student ns;
int op=0;

    printf("please choose one if the following to insert new student :\n");
     printf("   (1) enter a new student at the beginning \n");
      printf("   (2) enter a new student at the middle \n");
       printf("   (3) enter a new student at the end \n");
       scanf("%d",&op);
       if(op==1)
              {
               insert1(N,ns,ptr);}
else if (op==2)
          {

            insert2(N,ns,ptr);}
else if (op==3){
                   insert3(N,ns,ptr);

}


return 0;
}
