#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[10];
	float m1,m2,m3,m4;
	char roll_num[10];
	float avg;
	char grade;
} s[3];
void main(){
	for (int i=0; i<3; ++i){
		printf("Enter Student %d details\n",i+1);
		printf("Enter roll number\n");
		scanf("%s", s[i].roll_num);
		while ((getchar()) != '\n'); 
		printf("Enter name\n");
		scanf("%s",s[i].name);
		printf("Enter mid marks\n");
		scanf("%f %f %f %f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4);
		s[i].avg = (s[i].m1+s[i].m2+s[i].m3+s[i].m4)/(float)4;
		s[i].grade = (s[i].avg > 20)?'A':((s[i].avg > 14)?'B':'C');
	}
	printf("\nROLL_NO\t\t\tNAME\t\tGRADE\n");
	for (int i=0; i<3; ++i){
		printf("%s\t\t%s\t\t%c\n", s[i].roll_num, s[i].name, s[i].grade);		
	}
}
		
		
