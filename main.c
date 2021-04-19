#include<stdio.h>
#include<stdlib.h>
struct student{
        int userID;
        char FristName[25];
        char SecondName[25];
        int birthday; //in day,month,year
        int  score;
};

int main(int argc, char ** argv){
    printf("===================================\n");
    printf("   WELCOME TO STUDENT DATABASE     \n");
    printf("===================================\n");
    printf("\n");

struct student *ptr;
int N;
printf("Enter the number of students :\n");
scanf("%d",&N);
ptr=(struct student *)malloc(N*sizeof(struct student));
for(int i=0;i<N;i++){
    printf("Enter the data of student no. %d\n ID then Name then birthday then score\n",i+1);
    scanf("%d %s %s %d %d",&(ptr+i)->userID,&(ptr+i)->FristName[25],&(ptr+i)->SecondName[25],&(ptr+i)->birthday,&(ptr+i)->score);
}




return 0;
}
