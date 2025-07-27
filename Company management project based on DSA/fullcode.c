#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_MESSAGE_LEN 100
#define MAX_STACK_SIZE 10

struct profileforArjun
{
    char name[30];
    char position[10];
    int age;
    char dateofjoining[10];
};

struct profileforZara
{
    char name[10];
    char position[10];
    int age;
    char dateofjoining[10];
};
struct profileforVikram
{
    char name[10];
    char position[10];
    int age;
    char dateofjoining[10];
};

struct profileforAnaya
{
    char name[10];
    char position[10];
    int age;
    char dateofjoining[10];
};

struct profileforSodhi
{
    char name[10];
    char position[10];
    int age;
    char dateofjoining[10];
};

struct task
{
    char task[30][30];
    int top;
};
void taskstackPUSH(struct task *t)
{
    char taskname[30];

    if (t->top == 9)
    {
        printf("Task limit is full for a day\n");
    }
    else
    {
        printf("Enter your task name : ");
        scanf("%s", taskname);

        t->top++;
        
        char stringconcatenated[50];

        strcpy(stringconcatenated, taskname);
        
        strcpy(t->task[t->top], stringconcatenated);

        printf("Task added !\n");
    }
    
}
void taskstackPop(struct task *t)
{
    if (t->top == -1)
    {
        printf("No Task found !\n");
    }
    else
    {
        printf("The Task '%s' is deleted !\n", t->task[t->top]);
        t->top--;
    }
}
void taskstackdisplay(struct task *t1)
{
    if (t1->top == -1)
    {
        printf("No Task found !\n");
    }
    else
    { 
        for (int i = t1->top; i >= 0; i--)
        {
            printf("Task %d. %s\n", i+1, t1->task[i]);
        }
        
    }
    
}

// Structure
struct Profile {
    char name[50];
    char position[50];
    char joiningdate[20];
    int age;
};

// Stack
struct Stack {
    char messages[MAX_STACK_SIZE][MAX_MESSAGE_LEN];
    int top;
};


void push(struct Stack *s, const char *message) {
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("Messages limit is full!\n");
        return;
    }
    s->top++;
    strcpy(s->messages[s->top], message);
}

/* char* pop(struct Stack *s) {
    if (s->top == -1) {
        printf("No messages found !\n");
        return NULL;
    }
    return s->messages[s->top--];
}
 */
void displayMessages(struct Stack *s) {
    if (s->top == -1) {
        printf("No messages found.\n");
        return;
    }
    printf("Messages:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d. %s\n", s->top - i + 1, s->messages[i]);
    }
}
struct ProfileB {
    char name[50];
    char position[50];
    int age;
    char dateofjoining[11];
};

// Stack
struct Stacka {
    char messages[MAX_STACK_SIZE][MAX_MESSAGE_LEN];
    int top;
};

void Push(struct Stacka *s, const char *message) {
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    s->top++;
    strcpy(s->messages[s->top], message);
}
char* Pop(struct Stacka *s) {
    if (s->top == -1) {
        printf("No previous projects !\n");
        return NULL;
    }
    return s->messages[s->top--];
}
void ProjectPush(struct Stacka *s) {
    if (s->top == -1) {
        printf("No previous projects !\n");
        return;
    }
    else
    {
        char str[10];
        printf("Enter the project name : ");
        scanf("%s", &str);

        s->top++;

        strcpy(s->messages[s->top],str);
        printf("Project added !\n");
    }
}
void ProjectDisp(struct Stacka *s)
{
    if (s->top == -1)
    {
        printf("No previous projects are there !");
    }
    else
    {
        for (int i = s->top; i >= 0; i--)
        {
            printf("%d. %s\n", i+1, s->messages[i-1]);
        }
        
    }
    
}
int main()
{
    int u;
    int o;
    int n;
    char m[50];
    char password[6];
    char name[10];
    char privacyKey[20];
    char privacyKey2[20];
    struct ProfileB bossProfile;
    struct Stacka *messageStack1;

    struct Profile managerProfile;
    struct task *t;
    struct Stack messageStack;
    messageStack.top = -1;

    t = (struct task *) malloc(sizeof(struct task));
    t->top = -1;

    struct profileforArjun A;
    struct profileforZara Z;
    struct profileforSodhi S;
    struct profileforVikram V;
    struct profileforAnaya AY;

    printf("Verify your identity please \n");
    printf("1. Boss\n2. Manager\n3. Employee\t");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    a21 :
         printf("Enter your privacy key: ");
    scanf("%s", privacyKey2);

    // Key = "8686"
    if (strcmp(privacyKey2, "8686") != 0) {
        printf("Privacy key incorrect. Exiting...\n");
        return 0;
    }

    messageStack1->top == -1;
    messageStack1 = (struct Stacka *) malloc(sizeof(struct Stacka));

    // Initialize boss profile
    strcpy(bossProfile.name, "Ahan Raichand");
    strcpy(bossProfile.position, "BOSS");
    bossProfile.age = 32;
    strcpy(bossProfile.dateofjoining, "22/03/2008");

functions:
    // Display options to the user
    printf("1. Access Profile\n");
    printf("2. Announce a new project\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    int choice1;
    scanf("%d", &choice1);
    switch (choice1) {
        case 1:
            printf("Name: %s\nPosition: %s\nAge: %d\nDate of joining: %s\n", 
            bossProfile.name, bossProfile.position, bossProfile.age, bossProfile.dateofjoining);
            break;
        case 2:

            ProjectPush(messageStack1);

        break;
        case 3:
            printf("Exiting...\n");
            exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");

    }
                printf("Do you want do something more ?\n1. Yes\n2. No\t");
                scanf("%d", &u);
                if (u ==1)
                {
                    goto a21;
                }
                else{
                    exit(0);
                }
                break;
    case 2:
    a :
    printf("Enter your privacy key: ");
    scanf("%s", privacyKey);

    if (strcmp(privacyKey, "password") != 0) {
        printf("Privacy key incorrect. Exiting...\n");
        return 0;
    }
    

    strcpy(managerProfile.name, "MIMI");
    strcpy(managerProfile.position, "Manager");
    strcpy(managerProfile.joiningdate,"16/07/2015");
    managerProfile.age = 32;
    

    int choice;
    menu:

    printf("1. Access Profile\n");
    printf("2. Message someone\n");
    printf("3. View messages\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf(" %d", &choice);

    switch (choice) {

        case 1:
            printf("Name: %s\nPosition: %s\nJoining Date: %s\nAge: %d\n", managerProfile.name, managerProfile.position,managerProfile.joiningdate, managerProfile.age);
        break;
        case 2: {
            printf("Enter message to send: ");
            char message[MAX_MESSAGE_LEN];
            scanf(" %[^\n]", message);
            push(&messageStack, message);
            printf("Message sent!\n");
        }
        break;
        case 3:
            displayMessages(&messageStack);
            break;
        case 4:
                printf("Exited from Recob Access Management Application !");
                exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            goto menu;
            break;
    }
                printf("Do you want do something more ?\n1. Yes\n2. No\t");
                scanf("%d", &u);
                if (u ==1)
                {
                    goto a;
                }
                else{
                    exit(0);
                }
        break;
    case 3:
        again :
    
        printf("Enter your name please : ");
        scanf("%s", &name);

        if (strcmp(name, "Arjun") == 0)
        {
            strcpy(A.name, "Arjun");
            A.age = 25;
            strcpy(A.position, "Employee");
            strcpy(A.dateofjoining, "02/07/2022");
            
            
            printf("Please enter your password : ");
            scanf("%s", &password);

            if (strcmp(password, "ABC123") == 0)
            {

                printf("Password verified successfully !\n");
                printf("Welcome Arjun");

                again1: 
                printf("What do want to do?\n1. Acess Profile\n2. Enter today's task\n3. View previous tasks\n4. Completed the last task?\n5. EXit\t");
                scanf("%d", &o);

                switch (o)
                {
                case 1 : 
                 printf("\nYour Profile : \n");
                 printf("Name : %s\n", A.name);
                 printf("Age : %d\n", A.age);
                 printf("Position : %s\n", A.position);
                 printf("Date of joining : %s\n", A.dateofjoining);

                    break;
                case 2 : 

                taskstackPUSH(t);

                break;
                case 3  :

                taskstackdisplay(t);
                break;

                case 4 :

                taskstackPop(t);
                break;
                case 5 :

                printf("Exited from Recob Access Management Application !");
                exit(0);
                default:
                
                printf("Wrong input choosen !");
                goto again1;

                    break;
                }
                printf("Do you want do something more ?\n1. Yes\n2. No\t");
                scanf("%d", &u);
                if (u ==1)
                {
                    goto again;
                }
                else{
                    exit(0);
                }
                
                
            }
            else
            {
                printf("Enter the correct password !");
            }
            break;
        }

        if (strcmp(name, "Zara") == 0)
        {
            printf("Please enter your password : ");
            scanf("%s", &password);

            if (strcmp(password, "FGH901") == 0)
            { 
                strcpy(Z.name, "Zara");
                strcpy(Z.dateofjoining, "10/05/2022");
                strcpy(Z.position, "Employee");

                Z.age = 30;

                printf("Password verified successfully !\n");
                printf("Welcome Zara");
                again2: 
                printf("What do want to do?\n1. Acess Profile\n2. Enter today's task\n3. View previous tasks\n4. Completed the last task?\n5. EXit\t");
                scanf("%d", &o);

                switch (o)
                {
                case 1 : 
                  printf("\nYour Profile : \n");               
                 printf("Name : %s\n", Z.name);
                 printf("Age : %d\n", Z.age);
                 printf("Position : %s\n", Z.position);
                 printf("Date of joining : %s\n", Z.dateofjoining);

                    break;
                case 2 : 

                taskstackPUSH(t);

                break;
                case 3  :

                taskstackdisplay(t);
                break;

                case 4 :

                taskstackPop(t);
                break;
                case 5 :

                printf("Exited from Recob Access Management Application !");
                exit(0);
                default:
                
                printf("Wrong input choosen !");
                goto again2;

                    break;
                }
                printf("Do you want do something more ?\n1. Yes\n2. No\t");
                scanf("%d", &u);
                if (u ==1)
                {
                    goto again;
                }
                else{
                    exit(0);
                }
                
                
            }
            else
            {
                printf("Enter the correct password !");
            }
            break;
        }

         if (strcmp(name, "Vikram") == 0)
        {
            printf("Please enter your password : ");
            scanf("%s", &password);

            if (strcmp(password, "DE90S7") == 0)
            {
            
                printf("Password verified successfully !\n");
                printf("Welcome Vikram");
                again3: 
                printf("What do want to do?\n1. Acess Profile\n2. Enter today's task\n3. View previous tasks\n4. Completed the last task?\n5. EXit\t");
                scanf("%d", &o);

                switch (o)
                {
                case 1 : 
                printf("\nYour Profile : \n");
                strcpy(V.name, "Vikram");
                strcpy(V.dateofjoining, "15/02/2021");
                strcpy(V.position, "Employee");

                V.age = 27;

                printf("Name : %s\n", V.name);
                printf("Age : %d\n", V.age);
                printf("Position : %s\n", V.position);
                printf("Date of joining : %s\n", V.dateofjoining);

                break;
                case 2 : 

                taskstackPUSH(t);

                break;
                case 3  :

                taskstackdisplay(t);
                break;

                case 4 :

                taskstackPop(t);
                break;
                case 5 :

                printf("Exited from Recob Access Management Application !");
                exit(0);
                default:
                
                printf("Wrong input choosen !");
                goto again3;

                    break;
                }
                printf("Do you want do something more ?\n1. Yes\n2. No\t");
                scanf("%d", &u);
                if (u ==1)
                {
                    goto again;
                }
                else{
                    exit(0);
                }
                
                
            }
            else
            {
                printf("Enter the correct password !");
            }
            break;
        }

        if (strcmp(name, "Anaya") == 0)
        {
            printf("Please enter your password : ");
            scanf("%s", &password);

            if (strcmp(password, "WE2310") == 0)
            {
                strcpy(AY.name, "Anaya");
                strcpy(AY.position, "Employeee");
                strcpy(AY.dateofjoining, "24/10/2022");

                AY.age = 28;

                printf("Password verified successfully !\n");
                printf("Welcome Anaya");
                again4: 
                printf("What do want to do?\n1. Acess Profile\n2. Enter today's task\n3. View previous tasks\n4. Completed the last task?\n5. EXit\t");
                scanf("%d", &o);

                switch (o)
                {
                case 1 : 
                printf("\nYour Profile : \n");
                printf("Name : %s\n", AY.name);
                printf("Age : %d\n", AY.age);
                printf("Position : %s\n", AY.position);
                printf("Date of joining : %s\n", AY.dateofjoining);

                    break;
                case 2 : 

                taskstackPUSH(t);

                break;
                case 3  :

                taskstackdisplay(t);
                break;

                case 4 :

                taskstackPop(t);
                break;
                case 5 :

                printf("Exited from Recob Access Management Application !");
                exit(0);
                default:
                
                printf("Wrong input choosen !");
                goto again4;

                    break;
                }
                printf("Do you want do something more ?\n1. Yes\n2. No\t");
                scanf("%d", &u);
                if (u ==1)
                {
                    goto again;
                }
                else{
                    exit(0);
                }
                
                
            }
            else
            {
                printf("Enter the correct password !");
            }
            break;
        }
   
        if (strcmp(name, "Sodhi") == 0)
        {
            printf("Please enter your password : ");
            scanf("%s", &password);
            
            if (strcmp(password, "QWES210") == 0)
            {
                strcpy(S.name, "Sodhi");
                strcpy(S.position, "Employee");
                strcpy(S.dateofjoining, "16/10/2023");

                S.age = 23;

                printf("Password verified successfully !\n");
                printf("Welcome Sodhi");
                again5: 
                printf("What do want to do?\n1. Acess Profile\n2. Enter today's task\n3. View previous tasks\n4. Completed the last task?\n5. EXit\t");
                scanf("%d", &o);

                switch (o)
                {
                case 1 : 

                printf("\nYour Profile : \n");

                printf("Name : %s\n", S.name);
                 printf("Age : %d\n", S.age);
                 printf("Position : %s\n", S.position);
                 printf("Date of joining : %s\n", S.dateofjoining);

                break;
                case 2 : 

                taskstackPUSH(t);

                break;
                case 3  :

                taskstackdisplay(t);
                break;

                case 4 :

                taskstackPop(t);
                break;
                case 5 :

                printf("Exited from Recob Access Management Application !");
                exit(0);
                default:
                
                printf("Wrong input choosen !");
                goto again5;

                    break;
                }
                printf("Do you want do something more ?\n1. Yes\n2. No\t");
                scanf("%d", &u);
                if (u ==1)
                {
                    goto again;
                }
                else{
                    exit(0);
                }
                
                
            }
            else
            {
                printf("Enter the correct password !");
            }
            break;
        }
        else
        {
            printf("Such named employee is not there in the office");
        }
        break;
            default :

    printf("Sorry you have entered wrong identity !");
        break;
    }
}
