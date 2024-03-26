#include<stdio.h>
int main()
{
	int rollNo,m1,m2,m3,m4;
	long int phNo;
	float avg,perc;
	char name[17],address[10],gender;

	
	puts("\nEnter the Name :");
	fgets(name,16,stdin);

	
	puts("\nEnter Gender:");
	gender = getc(stdin);

	
	puts("\nEnter Address\n");
	//scanf("");
	scanf("%s",address);

	puts("\n Enter Roll Number:");
	scanf("%04d",&rollNo);

	puts ("\nEnter Phone No:");
	scanf("%ld",&phNo);

	puts("Enter Marks 1:");
	scanf("%d",&m1);
	
	puts("\nEnter Marks 2:");
	scanf("%d",&m2);

	puts("\nEnter marks3:");
	scanf("%d",&m3);

	puts("\nEnter marks4:");
	scanf("%d",&m4);
	
	avg =(m1+m2+m3+m4)/4;
	perc =(m1+m2+m3+m4)/4;

	puts("\nRoll_No        Name        Gender      PhNo       Address   M1   M2   M3   M4   Avg   Percentage\n");
	puts("---------------------------------------------------------------------------------------------------\n");
	printf("%4d             %s          %c          %ld         %s        %d   %d    %d  %d   %f     %f\n",rollNo,name,gender,phNo,address,m1,m2,m3,m4,avg,perc);
	return 0;
}

