/*
    Program to Determine the grade based on Marks
*/

#include<stdio.h>

int main()
{
	printf("Program to Determine the grade based on Marks by using *Ladder If Else*");

	float marks;
	printf("\n\nEnter the marks of students : ");
	scanf("%f", &marks);
	printf("\n");

	if(marks >= 90 && marks <= 100)
	{
		printf("Congratulations, Excellent Work!");
		printf("\nGrade : A+");
	}
	else if(marks >= 80 && marks < 90)
	{
		printf("Very Good Job! You're Doing Amazing!");
		printf("\nGrade : A");
	}
	else if(marks >= 70 && marks < 80)
	{
		printf("Good efforts! Keep Pushing Yourself!");
		printf("\nGrade : B+");
	}
	else if(marks >= 60 && marks < 70)
	{
		printf("Above Average! You Can Improve Even More!");
		printf("\nGrade : B");
	}
	else if(marks >= 50 && marks < 60)
	{
		printf("Average Performance! Keep Practicing!");
		printf("\nGrade : C+");
	}
	else if(marks >= 40 && marks < 50)
	{
		printf("Passing, But there's room for improvement!");
		printf("\nGrade : C");
	}
	else
	{
		printf("Failed. Don't give up, try harder next time!");
		printf("\nGrade : F");
	}

	return 0;
}
