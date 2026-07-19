#include <stdio.h>

int main() {
    char name[50];
    int seats;
    float fare;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    fare = seats * 500;

    printf("\n--- Ticket Details ---\n");
    printf("Passenger Name : %s\n", name);
    printf("Seats Booked   : %d\n", seats);
    printf("Total Fare     : %.2f\n", fare);

    return 0;
}
