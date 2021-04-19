#include<stdio.h>
#include<stdlib.h>
struct student{
        int userID;
        char Name[25];
        int birthday; //in day,month,year
        int  score;
};

int main(){

struct student *ptr;
int N;
printf("Enter the number of students :\n");
scanf("%d",&N);
ptr=(struct student *)malloc(N*sizeof(struct student));
for(int i=0;i<N;i++){
    printf("Enter the data of student no. %d\n ID then Name then birthday then score\n",i+1);
    scanf("%d %s %d %d",&(ptr+i)->userID,&(ptr+i)->Name[25],&(ptr+i)->birthday,&(ptr+i)->score);
}




return 0;
}
