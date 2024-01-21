#include <stdio.h>
#include <math.h>

void calculo(float, float,float,int, float);

int main() {

    system("color B0");
    float pesoLimiteCamion, pesoVacas, produccionLeche, produccionMaxima;
    int respuesta,numVacas;

    respuesta=1;

     printf("\n ---------Bienvenid@s a la tienda de leche fresca------------- \n\n\n ");

    while (respuesta == 1){
        pesoLimiteCamion =0;
        pesoVacas=0;
        produccionLeche=0;
        numVacas=0;
        produccionMaxima=0;

        while (pesoLimiteCamion <= 0 || pesoLimiteCamion < 2 || pesoLimiteCamion > 32){

        printf("Ingrese el peso total que el camion puede llevar en toneladas (entre 2 y 32): \n");
        scanf("%f", &pesoLimiteCamion);

            if (pesoLimiteCamion <= 0 || pesoLimiteCamion < 2 || pesoLimiteCamion > 32)
            {
                printf("Error en el peso limite del camion. Por favor, ingreselo nuevamente.\n");
            }
        }


          while (pesoVacas < 140 || pesoVacas > 1100){

            printf(" Ingresa el peso de cada vaca en kilogramos (entre 140 y 1100): \n");
            scanf("%f", &pesoVacas);

            if (pesoVacas < 140 || pesoVacas > 1100) {
                printf("Error en el peso de las vacas. Por favor, ingréselo nuevamente.\n");
            }
        }


            while (produccionLeche <1 || produccionLeche > 70){

            printf("Ingrese la produccion de leche de la  vaca en litros por dia (entre 1 y 70): \n");
            scanf("%f", &produccionLeche);

            if (produccionLeche < 1 || produccionLeche > 70) {
                printf("Error en la produccion de leche. Por favor, ingresela nuevamente.\n");
            }
        }


        calculo(pesoLimiteCamion , pesoVacas ,  produccionLeche , numVacas,produccionMaxima );
        printf(" Desea ingresar los datos de otro grupo de vacas?: \n ");
        printf("1.-Si \n 2.- No  \n ");
        scanf("%d", &respuesta);

    }

    printf("\n  GRACIAS NOS VEMOS LA PROXIMA !\n");

    return 0;

}

void calculo(float pesoLimiteCamion , float pesoVacas , float produccionLeche , int numVacas , float produccionMaxima){
numVacas = trunc((pesoLimiteCamion * 1000) / pesoVacas);
produccionMaxima = numVacas * produccionLeche;
printf("\n\n-----------LOS RESULTADOS SON:----------------\n");
printf("El numero maximo de vacas que pueden ser transportadas es de : %.d  vacas \n", numVacas);
printf("La produccion maxima de  leche posible es: %.2f litros\n\n", produccionMaxima );
}
