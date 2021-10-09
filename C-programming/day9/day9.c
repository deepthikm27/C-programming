#include<stdio.h>
#include"day9.h"
int f_name(char ch)
{
    FILE * fptr1  , * fptr2;
    fptr1 = fopen("filename", "r");
    if(fptr1 == NULL)
    {

        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }
        printf("File opened successfully. Reading file contents character by character. \n\n");

    do
    {
        ch = fgetc(fptr1);
        putchar(ch);

    } while(ch != EOF);
    // Open another file for writing
    //fptr1 = fopen("filename",'r');
    fptr2 = fopen("filename", "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n");
        exit(0);
    }

    // Read contents from file
    ch = fgetc(fptr1);
    while (ch != EOF)
    {
        fputc(ch, fptr2);
        ch = fgetc(fptr1);
    }

    printf("\nContents copied to %s","filename");

    fclose(fptr1);
    fclose(fptr2);
// Write a program to count number of characters, spaces tabs and lines in a file.
   FILE *fp;
   char ch1;
   int nol=0,not=0,nos=0,noc=0;
   fp  = fopen("filename",'r');
   while(1)
   {
      ch1=fgetc(fp);
      if(ch1 == EOF)
      break;
      noc++;
      if(ch1==" ")
      nos++;
      if(ch1 == '\n')
      nol++;
      if(ch1=='\t')
      not++;
   }
   fclose(fp);
   printf("\n Number of characters = %d",noc);
   printf("\n Number of blanks = %d",nos);
   printf("\n Number of tabs = %d",not);
   printf("\n Number of lines = %d",nol);

// Read a file which contains one number per line.
//Check the number is odd or even and write to corresponding odd.txt or even.txt accordingly.
// Note: Numbers may not be single digit numbers.

    FILE *f1,*f2,*f3;
    int number,i;

    printf("Contents of DATA file\n\n");
    f1 = fopen("DATA","w");  /* create a data file */
for(i=1;i<=30;i++)
    {
        scanf("%d",&number);
        if(number==-1)break;
        putw(number,f1);
    }
    fclose(f1);

    f1 = fopen("DATA","r");
    f2 = fopen("ODD","w");
    f3 = fopen("EVEN","w");

    while((number = getw(f1)) != EOF) /* Read from Data file */

    {
        if(number%2==0)
            putw(number,f3);
        else
            putw(number,f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2 = fopen("ODD","r");
    f3 = fopen("EVEN","r");

    printf("\n\nContents of ODD file \n\n");
    while((number = getw(f2)) != EOF)
        printf("%4d",number);

    printf("\n\nContents of EVEN file \n\n");
    while((number = getw(f3)) != EOF)
        printf("%4d",number);

    fclose(f2);
    fclose(f3);
    return 0;
}
//Write a program to create telephone directory.
//It should include Name, address and telephone number.
//It should have facilities for adding, deleting, editing and searching any number. Implement using text mode.
 int telephone_directory(int N)
 {
struct person{
     char name[20];
     long telno;
} obj[N];
    int totrec = 0;
      FILE *fp;
      fp=fopen("filename","a");
      printf("*****Add Record****\n");
      for(int i = 0; i< N ;i++)
      {
      printf("Enter Name : ");
      scanf("%s",obj[i].name);
      printf("Enter Telephone No. : ");
      scanf("%d",&obj[i].telno);
      fprintf(fp,"%s %d",obj[i].name,obj[i].telno);
      fclose(fp);
      fp=fopen("filename","r");
      printf("*****Display All Records*****\n");
      printf("\n\n\t\tName\t\t\tTelephone No.");
      printf("\n\t\t=====\t\t\t===============\n\n");
      while(!feof(fp))
      {
      fscanf(fp,"%s %d",obj.name,&obj.telno);
      printf("%s %d\n",obj.name,obj.telno);
      }
      //fonding data in directory
      fp=fopen("data.txt","r");
      printf("*****Display Specific Records*****\n");
      printf("\nEnter Name : ");
      scanf("%s",&name);
      while(!feof(fp))
      {
      fscanf(fp,"%20s %7ld",obj.name,&obj.telno);
        if(strcmpi(obj.name,name)==0){
        printf("\n\nName   :  %s",obj.name);
        printf("\nTelephone No : %ld",obj.telno);
        totrec++;
         }
      }
      if(totrec==0)
         printf("\n\n\nNo Data Found");
      else
         printf("\n\n===Total %d Record found===",totrec);
      fclose(fp);
}
char choice;
    while(1){
    clrscr();
    printf("*****TELEPHONE DIRECTORY*****\n\n");
    printf("1) Append Record\n");
    printf("2) Find Record\n");
    printf("3) Read all record\n");
    printf("4) exit\n");
    printf("Enter your choice : ");
    fflush(stdin);
    choice = getche();
    switch(choice){
         case'1' : //call append record
            appendData();
            break;
         case'2' : //call find record
             findData();
            break;
         case'3' : //Read all record
            showAllData();
            break;
         default : return 0;
    }

return 0;
}
// Write a program to create telephone directory.
//It should include Name, address and telephone number.
//It should have facilities for adding, deleting, editing and searching any number. Implement using binary mode.
