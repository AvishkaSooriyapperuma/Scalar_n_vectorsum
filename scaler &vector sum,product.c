#include<stdio.h>
int main()
{
    int U[3],V[3],W[3],SumU=0,SumV=0,Sp=0;
 //suraji
      int i;

     for (i=0;i<3;i++)
     {
         printf("Enter a value into the element %d of array U ",i+1);
         scanf("%d",&U[i+1]);
         printf("Enter a value into the element %d of array V ",i+1);
         scanf("%d",&V[i+1]);
     }
    
    for (i=0;i<3;i++)
    {
        SumU= SumU+ U[i];
        SumV= SumV+ V[i];
    } 
    
    printf("The Scaler sum of U is %d \n",SumU);
    printf("The Scaler sum of V is %d \n",SumV);
    
    for (i=0;i<3;i++)
    {
        W[i]=U[i]*V[i];
        Sp=Sp+W[i];
    }

    printf("Scaler product is %d \n",Sp);

    //vector sum // Nishu

    printf("vector sum is \n",)

    for (i=0;i<3;i++)

    {

    W[i]=U[i]+V[i];

    printf("%d \n",W[i]);

    }

    //vector product

    printf("Vector product is \n")

    for (i=0;i<3;i++)

    {



}
printf("****programme is end****");
}
