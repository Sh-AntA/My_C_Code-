#include <stdio.h>

int studentNumber=0;

struct students {
    int id;
    char name[20];
    int batch;
};

struct students s[41];

void addStudent()
{
    int id,batch;

    printf("\nEnter the Information of a Student.");

    printf("\nEnter the ID: ", id);
    scanf("%d", &id);
    s[id-1].id = id;

    printf("enter the batch number : ",batch);
    scanf("%d",&batch);
     s[id-1].batch = batch;

    printf("Enter the Name: ");
    getchar();
    gets(s[id-1].name);




}

void displayStudent()
{
    int i;

    for(i=0; i<41; i++){
        if(s[i].id != 0){
            printf("\nInfo of %dth student: ", i);
            printf("\nID: %d", s[i].id);
            printf("\nbatch : %d",s[i].batch);
            printf("\nName: ");
            puts(s[i].name);
        }
    }

    printf("\n");
}

void updateStudent()
{
    int id;
    printf("\nEnter the ID of a Student whose Name You Want to Update: ");
    scanf("%d", &id);

    printf("\nEnter the New Name: ");
    getchar();
    gets(s[id].name);
}

int main()
{
    printf("\t\t1. Add Student");
    printf("\n\t\t2. Update Student");
    printf("\n\t\t3. Display Student");
    printf("\n\t\t4. Exit");

    printf("\nEnter Your Choice: ");

    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            addStudent();
            main();
        case 2:
            updateStudent();
            main();
        case 3:
            displayStudent();
            main();
        default:
            exit(0);
    }

    addStudent();
    updateStudent();
    displayStudent();

    return 0;
}
