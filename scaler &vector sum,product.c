#include<stdio.h>
int main()
{
    int U[5],V[5],W[5],sumU=0,sumV=0,sp=0;
 //suraji
    
    for (i=0;i<5;i++)
    { 
    sumU= sumU+ U[i];
    sumV= sumV+ V[i];
    } 
    printf("The scaler sum of U is %d \n",sumU);
    printf("The scaler sum of V is %d \n",sumV);
    for (i=0;i<5;i++)
    {​​
        W[i]=U[i]*V[i];
        sp=sp+W[i];
    }​​

    printf("Scaler product is %d \n",sp);

     //Nishu

}
