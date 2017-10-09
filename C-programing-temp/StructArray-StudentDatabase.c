#include <stdio.h>
#include <conio.h>

struct StudentInfo
	{
	int rollNumber;
	char name[30];
	float percentage;
	};

struct StudentInfo classSheet[30];
void CreateClassSheet(int size);
void DisplayClassSheet(int size);
int IsExistingRollNo(int rollNumber, int size);
void RemoveStudent(int rollNumber, int size);
void UpdateStudent(int rollNumber, int size);

int main()
	{
		int size, choice;
		int cont;

		printf("\nEnter number of students in class: ");
		scanf("%d", &size);

		do
			{
				printf("\nEnter your choice: ");
				scanf("%d", &choice);
				switch(choice){
					case 1: //Add to the list
					CreateClassSheet(size);
					break;
					case 2: //Display
					DisplayClassSheet(size);
					break;
					case 3:	//Update
					UpdateStudent(rollNumber, size);
					break;
					case 4:	//Delete
					RemoveStudent(rollNumber, size);
					break;
				}
				printf("\nDo you want to continue: ");
				scanf("%d", &cont);
			}while(cont != 1);
	}

void CreateClassSheet(int size)
{
	int rollNumber;
	int isExist = 0;
	for (int i = 0; i < size; ++i)
	{
		printf("\nEnter roll number: ");
		scanf("%d", &classSheet[i].rollNumber);

		isExist = IsExistingRollNo(classSheet[i].rollNumber, size);
		if(isExist != 0)
			{
			printf("\nError: Roll number already exist; it should be unique");
			continue;	
			}
		printf("\nEnter name: ");
		scanf("%s", &classSheet[i].name);

		printf("\nEnter percentage: ");
		scanf("%f", &classSheet[i].percentage);
	}
}

void DisplayClassSheet(int size)
{
	printf("\n\n------------------Student List-----------------------\n\n");
	for (int i = 0; i < size; ++i)
	{
		printf("\n\t%d\t%s", classSheet[i].rollNumber, classSheet[i].name);
	}
}

void RemoveStudent(int rollNumber, int size)
	{
		int isExist = 0;
		isExist = IsExistingRollNo(rollNumber, size);
		if(isExist != 0){
		if(isExist == size - 1){
			classSheet[isExist].rollNumber = 0;
			classSheet[isExist].name = '';
			classSheet[isExist].percentage = 0;
		}

		for (int i = isExist; i < size - 1; ++i)
			{
			classSheet[i] = classSheet[i+1];
			}
		}
	}

void UpdateStudent(int rollNumber, int size)
	{
		int isExist = 0;
		isExist = IsExistingRollNo(rollNumber, size);

		if(isExist != 0){
			printf("\nEnter new Name: ");
			scanf("%s",&classSheet[isExist].name);
			printf("\nEnter new percentage: ");
			scanf("%s", &classSheet[isExist].percentage);
		}
	}

int IsExistingRollNo(int rollNumber, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			if(classSheet[i].rollNumber == rollNumber)
				return i;
		}
		return 0;
	}
