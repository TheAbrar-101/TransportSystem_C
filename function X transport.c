#include <stdio.h>

struct Student
{
    char id[10];
    char name[50];
    int phone;
};

void applyTransportCard(struct Student s)
{
    printf("\n--- Transport Card Application ---\n");
    printf("Student ID: %d\n", s.id);
    printf("Student Name: %s\n", s.name);
    printf("Phone: %d \n", s.phone);
    printf("Transport card applied successfully!\n");
}

void showTimeSchedule()
{
    printf("\n--- Bus Time Schedule ---\n");
    printf("Route A: 8:00 AM, 12:00 PM, 4:00 PM\n");
    printf("Route B: 9:00 AM, 1:00 PM, 5:00 PM\n");
}

void showBusRoute()
{
    int x,y;
    printf("\n--- Bus Routes ---\n");
    printf("1.Route A: Campus --> Mirpur --> Uttara\n");
    printf("2.Route B: Campus --> Dhanmondi --> Motijheel\n");
    printf("3.Route C: Uttara --> Mirpur --> Campus\n");
    printf("4.Route D: Motijheel --> Dhanmmondi --> Campus\n");
    printf("Choose Route :");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("You selected Route A: Campus -> Mirpur -> Uttara\n");
        break;
    case 2:
        printf("You selected Route B: Campus -> Dhanmondi -> Motijheel\n");
        break;
    case 3:
        printf("You selected Route C: Uttara --> Mirpur --> Campus\n");
        break;
    case 4:
        printf("You selected Route D: Motijheel --> Dhanmmondi --> Campus\n");
        break;
    default:
        printf("Invalid route choice.Please try again.\n");
    }

}

void submitFeedback(struct Student s)
{
    char feedback[200];
    printf("\n--- Feedback ---\n");
    printf("Enter your feedback: ");
    getchar();
    fgets(feedback,200,stdin);
    printf("Thank you, %s! Your feedback has been recorded.\n", s.name);
    printf("Your feedback is \" %s \" ",feedback);
}

int main()
{
    printf("\n\n************* Transport Management system ******************\n\n");
    struct Student s;
    int choice;

    printf("Enter Student ID: ");
    scanf("%s",s.id);

    printf("Enter Name: ");
    getchar();
    fgets(s.name,50, stdin);

    printf("Enter Phone Number: ");
    scanf("%d",&s.phone);
    do
    {
        printf("\n--- Student Transport System ---\n");
        printf("1. Apply for Transport Card\n");
        printf("2. Bus Time Schedule Management\n");
        printf("3. View Bus Routes\n");
        printf("4. Feedback\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            applyTransportCard(s);
            break;
        case 2:
            showTimeSchedule();
            break;
        case 3:
            showBusRoute();
            break;
        case 4:
            submitFeedback(s);
            break;
        case 5:
            printf("Thank you for using the transport system!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    while(choice != 5);

    return 0;
}
