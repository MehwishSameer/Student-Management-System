#include<stdio.h>
#include<string.h>
int main()
{
	char student[50][10],next,modify[20],compare[20],main;
	FILE *record,*temp;
	int i=1,pass=1234,opt=1,count=0,oldp;
	printf("===========================================\n\n");
	printf("*****SCHOOL MANAGEMENT SYSTEM*****\n\n");
	printf("===========================================\n\n");
	printf("WELCOME TO SCHOOL MANAGEMENT SYSTEM!\nEnter your Password:");
	while(i)
	{fflush(stdin);
	scanf("%d",&pass);
	if (pass!=1234)
	printf("Incorrect Password!!\nPlease try again\n\nEnter your Password:");
	else
	break;}
	while(opt)
	{printf("\nSelect any option from the menu:\n1.Add Student Record\n2.Delete Student Record\n3.Search Student Record\n4.Modify Student Record\n5.Generate Marksheet\n6.Change Password\n7.Display All Records\n8.EXIT\n");
	fflush(stdin);
	scanf("%d",&opt);
	//Add Student Record
	if(opt==1)
	{fflush(stdin);
	record=fopen("Student Record.txt","a");
	for(i=0;i<50;i++)
	{printf("\nFirst Name: ");
	scanf("%s",&student[i][0]);
	fprintf(record,"\n%s ,",&student[i][0]);
	printf("\nLast Name: ");
	scanf("%s",&student[i][1]);
	fprintf(record,"%s ,",&student[i][1]);
	printf("\nRoll Number: ");
	scanf("%s",&student[i][2]);
	fprintf(record,"%s ,",&student[i][2]);
	printf("\nSection: ");
	scanf("%s",&student[i][3]);
	fprintf(record,"%s ,",&student[i][3]);
	printf("\nSemester: ");
	scanf("%s",&student[i][4]);
	fprintf(record,"%s ,",&student[i][4]);
	printf("\nGender: ");
	scanf("%s",&student[i][5]);
	fprintf(record,"%s ,",&student[i][5]);
	printf("\nDate Of Birth: ");
	scanf("%s",&student[i][6]);
	fprintf(record,"%s ,",&student[i][6]);
	printf("\nPhone Number: ");
	scanf("%s",&student[i][7]);
	fprintf(record,"%s ,",&student[i][7]);
	printf("\nEmail Address: ");
	scanf("%s",&student[i][8]);
	fprintf(record,"%s ,",&student[i][8]);
	printf("\nEnter Percentage: ");
	scanf("%s",&student[i][9]);
	fprintf(record,"%s\n",&student[i][9]);
	printf("\nDo you want to enter another student data(Y/N):");
	fflush(stdin);
	scanf(" %c",&next);
	if(next!='Y')
	{printf("Your records have been successfully saved!!");
	break;}}
	fclose(record);
	printf("\nWant to go to the MainMenu or Exit(M/E):");
	fflush(stdin);
	scanf(" %c",&main);
	if(main=='M')
	continue;
	else
	{break;}}
	//Delete Student Record
	if(opt==2)
	{	record=fopen("Student Record.txt","a+");
	temp=fopen("temporary.txt","w+");
	while(i)
	{printf("Enter the name of student you want to delete:");
	fflush(stdin);
	scanf("%s",modify);
	while(fscanf(record,"%s",compare)!=EOF)
	{
	   if(strcmp(compare,modify)==0)
	   {fgets(compare,100,record);
	   	printf("%s",compare);
	   	count++;
		continue;}
	   else
	   {if(compare=="\n")
	   fprintf(temp,"\n");
	   fprintf(temp,"%s ",compare);}
	   }
	   if(count!=0)
	   break;
	   else
	   {printf("Record Not Found\n");
	   continue;}}
	fclose(record);
	fclose(temp);
	remove("Student Record.txt"); 
    rename("temporary.txt","Student Record.txt");
    printf("Record has been successfully deleted!!");
    count=0;
    printf("\nWant to go to the MainMenu or Exit(M/E):");
    fflush(stdin);
	scanf(" %c",&main);
	if(main=='M')
	continue;
	else
	{break;}
	}
	//Search Student Record
	if(opt==3)
	{record=fopen("Student Record.txt","r");
	while(i)
	{printf("Enter the name of student you want to search:");
	fflush(stdin);
	scanf("%s",modify);
	while(fscanf(record,"%s",compare)!=EOF)
	{
	   if(strcmp(compare,modify)==0)
	   {fgets(compare,100,record);
	   	printf("%s",compare);
	   	count++;
		break;}
	   }
	   if(count!=0)
	   {break;}
	   else
	   printf("Record Not Found\n");
	   }
	fclose(record);
	printf("\nWant to go to the MainMenu or Exit(M/E):");
	fflush(stdin);
	scanf(" %c",&main);
	if(main=='M')
	continue;
	else
	{break;}
	count=0;
    }
	//Modify Student Record
	if(opt==4)
	{record=fopen("Student Record.txt","a+");
	temp=fopen("temporary.txt","w+");
	while(i)
	{printf("Enter the name of student you want to modify:");
	fflush(stdin);
	scanf("%s",modify);
	while(fscanf(record,"%s",compare)!=EOF)
	{
	   if(strcmp(compare,modify)==0)
	   {fgets(compare,100,record);
	   	printf("%s",compare);
	   	count++;
		continue;}
	   else
	   {if(compare=="\n")
	   fprintf(temp,"\n");
	   fprintf(temp,"%s ",compare);}
	   }
	   if(count!=0)
	   break;
	   else
	   {printf("Record Not Found\n");
	   continue;}}
	fclose(record);
	fclose(temp);
	remove("Student Record.txt"); 
    rename("temporary.txt","Student Record.txt");
    count=0;
    record=fopen("Student Record.txt","a+");
    printf("Modify the details in the selected record: ");
    printf("\nFirst Name: ");
	scanf("%s",&student[i][0]);
	fprintf(record,"\n - %s ,",&student[i][0]);
	printf("\nLast Name: ");
	scanf("%s",&student[i][1]);
	fprintf(record,"%s ,",&student[i][1]);
	printf("\nRoll Number: ");
	scanf("%s",&student[i][2]);
	fprintf(record,"%s ,",&student[i][2]);
	printf("\nSection: ");
	scanf("%s",&student[i][3]);
	fprintf(record,"%s ,",&student[i][3]);
	printf("\nSemester: ");
	scanf("%s",&student[i][4]);
	fprintf(record,"%s ,",&student[i][4]);
	printf("\nGender: ");
	scanf("%s",&student[i][5]);
	fprintf(record,"%s ,",&student[i][5]);
	printf("\nDate Of Birth: ");
	scanf("%s",&student[i][6]);
	fprintf(record,"%s ,",&student[i][6]);
	printf("\nPhone Number: ");
	scanf("%s",&student[i][7]);
	fprintf(record,"%s ,",&student[i][7]);
	printf("\nEmail Address: ");
	scanf("%s",&student[i][8]);
	fprintf(record,"%s ,",&student[i][8]);
	printf("\nEnter Percentage: ");
	scanf("%s",&student[i][9]);
	fprintf(record,"%s\n",&student[i][9]);
	printf("Your data in %s record has been succesfully modified :)",modify);
	fclose(record);
	printf("\nWant to go to the MainMenu or Exit(M/E):");
	fflush(stdin);
	scanf(" %c",&main);
	if(main=='M')
	continue;
	else
	{break;}
	}
	//Change Password
	if(opt==6)
	{fflush(stdin);
		while(i)
		{printf("Enter Old password:");
		fflush(stdin);
		scanf("%d",&oldp);
		if(oldp==pass)
		{printf("Enter New password:");
		scanf("%d",&pass);
		break;}
		else
		{printf("You have entered wrong password\n");
		continue;}}
		printf("\nWant to go to the MainMenu or Exit(M/E):");
		fflush(stdin);
	    scanf(" %c",&main);
	if(main=='M')
	{continue;}
	else
	{break;}
	}
	//Display all records
	if(opt==7)
	{
	record=fopen("Student Record.txt","r");
	while(fscanf(record," %s",compare)!=EOF)
	{
	   	if(compare=="\n")
	   {printf("\n - ");}
	   printf("%s ",compare);
	   }	
	}
	fclose(record);
	printf("\nWant to go to the MainMenu or Exit(M/E):");
	fflush(stdin);
	scanf(" %c",&main);
	if(main=='M')
	continue;
	else
	{break;}}
	if(opt==8)
	return 0;
	return 0;
}
