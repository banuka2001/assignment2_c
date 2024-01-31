#include <stdio.h>

int main() {

    int withdrawalAMount,notsOf_5000,notsOf_1000,notsOf_500,notsOf_100,notsOf_20;

    printf("How much are you willing to withdraw?\n\n");
        scanf("%d",&withdrawalAMount);

    if (withdrawalAMount >= 50000 ) {
        printf("Enter an Amount below 50000\n");
    } else  {
        notsOf_5000 = withdrawalAMount / 5000;
            withdrawalAMount -= notsOf_5000*5000;

        printf("5000 notes: %d\n",notsOf_5000);

        notsOf_1000 = withdrawalAMount / 1000;
            withdrawalAMount -= notsOf_1000*1000;
        
        printf("1000 notes: %d\n",notsOf_1000);
       
        notsOf_500 = withdrawalAMount / 500;
            withdrawalAMount -= notsOf_500*500;
        
        printf("500 notes: %d\n",notsOf_500);
      
        notsOf_100 = withdrawalAMount / 100;
            withdrawalAMount -= notsOf_100*100;
        
        printf("100 notes: %d\n",notsOf_100);
       
        notsOf_20 = withdrawalAMount / 20;
            withdrawalAMount -= notsOf_20*20;
        
        printf("20 notes: %d\n",notsOf_20);


 
    }

}