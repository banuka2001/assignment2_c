#include <stdio.h>

    #define PI 3.14

// Functions call at top
void cubeVolume ();
void cylinderVolume ();
    
int main () {
    int input;

    printf("What do you wanna check ?\n");
    printf("1 for cube Volume, 2 for cylinder volume: ");
        scanf("%d",&input);

    switch (input) {
    case 1 : 
        cubeVolume();
        break;
    case 2 :
        cylinderVolume();
        break;
    default:
        break;
    }

}

void cubeVolume () {
     float V_cube,length;

    printf("Input Length of the cube: \n");
        scanf("%f",&length);

// Calculate the volume of cylinder
    V_cube = length * length * length;
// Display the volume of cube
    printf("%.2f cm^2",V_cube);

}

void cylinderVolume () { 
     float radius, height, V_cylinder;

    printf("Input radius of the cube: \n");
        scanf("%f",&radius);
   
    printf("Input height of the cube: \n");
        scanf("%f",&height);

// Calculate the volume of cube
    V_cylinder = PI * radius * radius * height;

// Display the cylinder volume
    printf("%.2f cm^3",V_cylinder);

}