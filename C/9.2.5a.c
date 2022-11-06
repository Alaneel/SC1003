// computeSalary

#include <stdio.h>

void getInput(int *ID, int *numberOfHours, int *payRate);
float computeSalary1(int numberOfHours, int payRate);
void computeSalary2(int numberOfHours, int payRate, float *GrossPay);

int main()
{
    int ID, numberOfHours, payRate;
    float GrossPay;
    do {
        getInput(&ID, &numberOfHours, &payRate);
        GrossPay = computeSalary1(numberOfHours, payRate);
        if (ID != -1){
            printf("ComputeSalary1(): ID %d grossPay %.2f\n", ID, GrossPay);
            computeSalary2(numberOfHours, payRate, &GrossPay);
            printf("CompeteSalary2(): ID %d grossPay %.2f\n", ID, GrossPay);
        }
    } while (ID != -1);
    return 0;
}

void getInput(int *ID, int *numberOfHours, int *payRate)
{
    printf("Enter ID (-1 to end): \n");
    scanf("%d", ID);
    if (*ID != -1){
        printf("Enter number of hours: \n");
        scanf("%d", numberOfHours);
        printf("Enter hourly pay rate: \n");
        scanf("%d", payRate);
    }
}

float computeSalary1(int numberOfHours, int payRate)
{
    float GrossPay;
    if (numberOfHours > 160)
    {
        GrossPay = 160 * payRate;
        numberOfHours -= 160;
        if (numberOfHours > 0)
            GrossPay += numberOfHours * 1.5 * payRate;
    }
    else 
        GrossPay = numberOfHours * 8;
    return GrossPay;
}

void computeSalary2(int numberOfHours, int payRate, float *GrossPay)
{
    if (numberOfHours > 160)
    {
        *GrossPay = 160 * payRate;
        numberOfHours -= 160;
        *GrossPay += numberOfHours * 12;
    }
    else {
        *GrossPay = numberOfHours * 8;
    }
}