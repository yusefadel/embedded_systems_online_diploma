#include <stdio.h>
#include <math.h>

struct Sstudent{
	char name[10];
	int roll;
	float marks;
};

int main() {
printf("Enter name : ");
struct Sstudent opj;
fflush(stdout);
scanf("%s",&opj.name);
printf("Enter roll number: ");
fflush(stdout);
scanf("%d",&opj.roll);
printf("Enter marks: ");
fflush(stdout);
scanf("%f",&opj.marks);

printf("\nDisplaying Information\nname:%s\nRoll:%d\nMarks:%f",opj.name,opj.roll,opj.marks);


    return 0;
}

