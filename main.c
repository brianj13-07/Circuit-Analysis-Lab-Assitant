#include <stdio.h>
#include <math.h>

//Declare circuit 1 lab 1
void circuit1(void);
void circuit2(void);
void circuit3(void);
void Lab2(void);


int main (void)
{
int choice = 0;
do{
printf("\n--------CIRCUIT LAB ASSISTANT--------\n");
printf("1. Lab 1 - Circuit 1\n");
printf("2. Lab 1 - Circuit 2\n");
printf("3. Lab 1 - Circuit 3\n");
printf("4. Lab 2\n");
printf("5. Exit\n");

//Doing the menu selection.
printf("Select your choice: ");
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
        Lab2();
        break;
    case 5:
        printf("Exiting program");
        break;
    default:
        printf("Invalid option");
}
}
while(choice != 5);

return 0;

}
//Define circuit 1 and store for the variable
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
printf("The value for I1 is(A) = ");
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
printf("The value for I1 is(A) = ");
scanf("%lf", &i1);
printf("The value for I2 is(A) = ");
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

//Define circuit 3 and store for the variable
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
printf("The value for Vab is(V) = ");
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

//Lab #2
void Lab2(void){
//Known Values
double V1 = 5.00;
double R1 = 1000.00;
double R2 = 1000.00;
double R3 = 1000.00;
double R4 = 1000.00;
double R5 = 1000.00;

//Measurements
double i1 = 0.0;
double i2 = 0.0;
double i3 = 0.0;
double i4 = 0.0;
double i5 = 0.0;

double vr1 = 0.0;
double vr2 = 0.0;
double vr3 = 0.0;
double vr4 = 0.0;
double vr5 = 0.0;

//Insert values from the lab
printf("The value for I1 is(A) = ");
scanf("%lf", &i1);
printf("The value for I2 is(A) = ");
scanf("%lf", &i2);
printf("The value for I3 is(A)= ");
scanf("%lf", &i3);
printf("The value for I4 is(A) = ");
scanf("%lf", &i4);
printf("The value for I5 is(A) = ");
scanf("%lf", &i5);
printf("The value for VR1 is(V) = ");
scanf("%lf", &vr1);
printf("The value for VR2 is(V) = ");
scanf("%lf", &vr2);
printf("The value for VR3 is(V) = ");
scanf("%lf", &vr3);
printf("The value for VR4 is(V)= ");
scanf("%lf", &vr4);
printf("The value for VR5 is(V) = ");
scanf("%lf", &vr5);

//Calcualtions for middle node (KCL)
double sum_branch_currents = i2 + i3;
double kcl_difference = i1 - sum_branch_currents;
double absolute_kcl = fabs(kcl_difference);
double tolerance = 0.000001;

//Calcualtion for the right node (KCL)
double sum_branch_currents2 = i2 + i4;
double kcl_difference2 = i5 - sum_branch_currents2;
double absolute_kcl2 = fabs(kcl_difference2);

//Calculations for loop #1 (KVL)
double kvl_loop1 = V1 - vr1 - vr3;
double absolute_kvl1 = fabs(kvl_loop1);
double tolerance_v = 0.01;

//Calculations for loop #2 (KVL)
double kvl_loop2 = V1 - vr4 - vr5;
double absolute_kvl2 = fabs(kvl_loop2);

//Calculations for loop #3 (KVL)
double kvl_loop3 = vr1 - vr2 - vr4;
double absolute_kvl3 = fabs(kvl_loop3);

//Show the inserted values
printf("\n--------LAB 2 MEASUREMENTS--------\n");
printf("I1 = %.6f A\n", i1);
printf("I2 = %.6f A\n", i2);
printf("I3 = %.6f A\n", i3);
printf("I4 = %.6f A\n", i4);
printf("I5 = %.6f A\n", i5);
printf("VR1 = %.3f V\n", vr1);
printf("VR2 = %.3f V\n", vr2);
printf("VR3 = %.3f V\n", vr3);
printf("VR4 = %.3f V\n", vr4);
printf("VR5 = %.3f V\n", vr5);

//Conclusions of the Lab
printf("\n--------LAB 2 ANALYSIS--------\n");
printf("\n--------KCL--------\n");
printf("Middle Node:\n");
printf("I1 = %.6f A\n", i1);
printf("I2 + I3 = %.6f A\n", sum_branch_currents);
printf("Difference = %.6f A\n", absolute_kcl);
if(absolute_kcl < tolerance){
    printf("KCL verified at middle node\n");
}
else{
    printf("KCL difference detected at middle node\n");
}

printf("\nRight Node:\n");
printf("I5 = %.6f A\n", i5);
printf("I2 + I4 = %.6f A\n", sum_branch_currents2);
printf("Difference = %.6f A\n", absolute_kcl2);
if(absolute_kcl2 < tolerance){
    printf("KCL verified at right node\n");
}
else{
    printf("KCL difference detected at right node\n");
}

printf("\n--------KVL--------\n");
printf("Loop 1:\n");
printf("V1 - VR1 - VR3 = %.3f V\n", kvl_loop1);
if(absolute_kvl1 < tolerance_v){
    printf("KVL verified\n");
}
else{
    printf("KVL difference\n");
}

printf("\nLoop 2:\n");
printf("V1 - VR4 - VR5 = %.3f V\n", kvl_loop2);
if(absolute_kvl2 < tolerance_v){
    printf("KVL verified\n");
}
else{
    printf("KVL difference\n");
}

printf("\nLoop 3:\n");
printf("VR1 - VR2 - VR4 = %.3f V\n", kvl_loop3);
if(absolute_kvl3 < tolerance_v){
    printf("KVL verified\n");
}
else{
    printf("KVL difference\n");
}
}


   

