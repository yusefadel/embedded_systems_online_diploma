#include <stdio.h>
#include <math.h>

struct  Sstudent{
	char name[10];
	int marks;
};


int main() {
printf("Enter information of students:\n");
struct Sstudent opj[2];
int i =0;
for(;i<2;i++){
	printf("for roll number %d\n",i+1);
	printf("Enter name: ");
	fflush(stdout);
	scanf("%s",opj[i].name);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%d",&opj[i].marks);
}
printf("Display information of students:\n");
i=0;
for(;i<2;i++){
	printf("information for roll number %d\n",i+1);
	printf("name: %s\n",opj[i].name);
	printf("marks:%d\n",opj[i].marks);
}

    return 0;
}

