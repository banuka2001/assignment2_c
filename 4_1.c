#include <stdio.h>

int main () {
 
 int withdrawalAMount,num_notes;
    int notes[] = {5000,2000,1000,500,100,20};
    int noOfNotes = sizeof(notes) / sizeof (notes[0]);

 printf("How much are you willing to withdraw?\n\n");
        scanf("%d",&withdrawalAMount);

        for (int i=0; i<= noOfNotes; i++) {
         int num_notes = withdrawalAMount / notes[i];
         withdrawalAMount -= num_notes*notes[i];
         printf("%dNotes: %d\n\n",notes[i],num_notes); 
        }
}