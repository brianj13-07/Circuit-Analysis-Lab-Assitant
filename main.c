#include <stdio.h>
#include <math.h>

//Declare circuit 1 lab 1
void circuit1(void);
void circuit2(void);
void circuit3(void);


int main (void)
{
int choice = 0;
do{
printf("--------CIRCUIT LAB ASSISTANT--------\n");
printf("1. Lab 1 - Circuit 1\n");
printf("2. Lab 1 - Circuit 2\n");
printf("3. Lab 1 - Circuit 3\n");
printf("4. Exit\n");

//Doing the menu selection.
printf("Select your choice: 1");
scanf("%d", &choice);

switch(choice){
    case 1:
        circuit1();
        break;
    case 2:
        circuit2();
        break;
    case 3:
        circuit3();
        break;
    case 4:
        printf("Exiting program");
        break;
    default:
        printf("Invalid option");
}
}
while(choice != 4);

return 0;

}
//Define circuit 2 and store for the variable
void circuit1(void){
printf("--------CIRCUIT 1---------\n");
//Known values from the lab sheet
double V = 5.00;
double R = 1000.00;
double theoretical_current = V/R;


//Measured values
double vab = 0.0;
double vbc = 0.0;
double vce = 0.0;
double vde = 0.0;
double vad = 0.0;
double i1 = 0.0;

//Insert values from the lab
printf("The value for Vab is(V) = ");
scanf("%lf", &vab);
printf("The value for Vbc is(V) = ");
scanf("%lf", &vbc);
printf("The value for Vce is(V)= ");
scanf("%lf", &vce);
printf("The value for Vde is(V) = ");
scanf("%lf", &vde);
printf("The value for Vad is(V) = ");
scanf("%lf", &vad);
printf("The val1ue for I1 is(A) = ");
scanf("%lf", &i1);

//Show the inserted values
printf("\n--------CIRCUIT 1 MEASUREMENTS--------\n");
printf("Vab = %.3f V\n", vab);
printf("Vbc = %.3f V\n", vbc);
printf("Vce = %.3f V\n", vce);
printf("Vde = %.3f V\n", vde);
printf("Vad = %.3f V\n", vad);
printf("I1 = %.3f A\n", i1);

//Calculate error percent
double difference = i1 - theoretical_current;
double absolute_difference = fabs(difference);
double percent_error = (absolute_difference / theoretical_current) * 100;

//Conclusion of the lab
printf("\n--------CIRCUIT 1 ANALYSIS--------\n");
printf("Voltage = %.3f V\n", V);
printf("Resistance = %.3f ohm\n", R);
printf("Theorical Current = %.3f A\n", theoretical_current);
printf("Measured Current = %.3f A\n", i1);
printf("Percent Error = %.3f %\n", percent_error);
}


//Define circuit 2 and store for the variable
void circuit2(void){
printf("--------CIRCUIT 2---------\n");
//Known values from the lab sheet
double V = 5.00;
double R1 = 1000.00;
double tolerance = 0.000001;
double theoretical_current = V/R1;

//Measured values
double vab = 0.0;
double vbc = 0.0;
double vcd = 0.0;
double vde = 0.0;
double vad = 0.0;
double i1 = 0.0;
double i2 = 0.0;

//Insert values from the lab
printf("The value for Vab is(V) = ");
scanf("%lf", &vab);
printf("The value for Vbc is(V) = ");
scanf("%lf", &vbc);
printf("The value for Vcd is(V)= ");
scanf("%lf", &vcd);
printf("The value for Vde is(V) = ");
scanf("%lf", &vde);
printf("The value for Vad is(V) = ");
scanf("%lf", &vad);
printf("The val1ue for I1 is(A) = ");
scanf("%lf", &i1);
printf("The val1ue for I2 is(A) = ");
scanf("%lf", &i2);

//Show the inserted values
printf("\n--------CIRCUIT 2 MEASUREMENTS--------\n");
printf("Vab = %.3f V\n", vab);
printf("Vbc = %.3f V\n", vbc);
printf("Vcd = %.3f V\n", vcd);
printf("Vde = %.3f V\n", vde);
printf("Vad = %.3f V\n", vad);
printf("I1 = %.3f A\n", i1);
printf("I2 = %.3f A\n", i2);

//Calculate error percent
double difference = i1 - theoretical_current;
double absolute_difference = fabs(difference);
double percent_error = (absolute_difference / theoretical_current) * 100;

//Conclusion of the lab
printf("\n--------CIRCUIT 2 ANALYSIS--------\n");
printf("Theorical I1 = %.3f A\n", theoretical_current);
printf("Measured I1 = %.3f A\n", i1);
printf("Percent Error = %.3f %\n", percent_error);
printf("\nMeasured I2 = %.8f A\n", i2);

//Check for open branch behavior
if(fabs(i2) < tolerance){
    printf("Open branch behavior confirmed\n");
}
else{
    printf("Unexpected current detected in open branch\n");
}


}

//Define circuit 2 and store for the variable
void circuit3(void){
printf("--------CIRCUIT 3---------\n");

//Measured values
double i = 0.0;
double i1 = 0.0;
double i2 = 0.0;
double vde = 0.0;
double vfg = 0.0;
double vab = 0.0;

//Insert values from the lab
printf("The value for I is(A) = ");
scanf("%lf", &i);
printf("The value for I1 is(A) = ");
scanf("%lf", &i1);
printf("The value for I2 is(A)= ");
scanf("%lf", &i2);
printf("The value for Vde is(V) = ");
scanf("%lf", &vde);
printf("The value for Vfg is(V) = ");
scanf("%lf", &vfg);
printf("The val1ue for Vab is(V) = ");
scanf("%lf", &vab);

//Known operations from the lab sheet
double sum_currents = i1 + i2;
double kcl_difference = i - sum_currents;
double absolute_kcl = fabs(kcl_difference);
double tolerance = 0.000001;

//Show the inserted values
printf("\n--------CIRCUIT 3 MEASUREMENTS--------\n");
printf("I = %.6f A\n", i);
printf("I1 = %.6f A\n", i1);
printf("I2 = %.6f A\n", i2);
printf("Vde = %.3f V\n", vde);
printf("Vfg = %.3f V\n", vfg);
printf("Vab = %.3f V\n", vab);

//Conclusion of the lab
printf("\n--------CIRCUIT 3 ANALYSIS--------\n");
printf("Total Current I = %.6f A\n", i);
printf("Branch Current I1 = %.6f A\n", i1);
printf("Branch Current I2 = %.6f A\n", i2);
printf("I1 + I2 = %.6f A\n", sum_currents);
printf("\nKCL Difference = %.6f A\n", kcl_difference);

//Check for KCL
if(absolute_kcl < tolerance){
    printf("KCL verified\n");
}
else{
    printf("KCL difference detected\n");
}
}


   

