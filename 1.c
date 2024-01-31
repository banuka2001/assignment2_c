#include <stdio.h>

int main () {

     int startReading,endReading;
    float Units,Charge,a,b,c,d;

    printf("-----------------------------------------------------\n");
    printf("|   Units Consumed   |         Rate in Rs.           |\n");
    printf("-----------------------------------------------------\n");
    printf("|    Less than 100   |            1.50(a)            |\n");
    printf("|    100 - 199       |            2.50(b)            |\n");
    printf("|    200 - 499       |            3.50(c)            |\n");
    printf("|    500 or above    |            5.00(d)            |\n");
    printf("-----------------------------------------------------\n");

    a = 1.50;
    b = 2.50;
    c = 3.50;
    d = 5.00; 

    printf ("Enter start meter reading: ");
        scanf("%d",&startReading);

    printf ("Enter end meter reading: ");
        scanf("%d",&endReading);

    Units = endReading - startReading;

        if (Units <= 0) {
                printf("Unit value is less than 0");
        }   else if (Units < 100) {
            Charge = Units * a;
        }   else if (Units >= 100 && Units < 200) {
            Charge = Units * b;
        }   else if (Units >= 200 && Units < 500) {
            Charge = Units * c;
        }   else if (Units >= 500) {  
            Charge = Units * d;
        }
    printf ("Rs. %.2f", Charge);

}








