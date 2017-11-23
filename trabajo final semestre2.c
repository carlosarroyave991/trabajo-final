#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int a;
int f;

struct equipo_futbol{
char nombre_equipo[30];
int victorias;
int derrotas;
int promedio;
int empates;
int goles_favor;
int goles_contra;
char nombre_goleador;
int goles_goleador;
}futbol[30];

void informacion_futbol_liga(){
int num , i,aux,aux2;
printf("\t\nUSTED DECIDIO VER LA INFORMACION DE LA LIGA.\n\n");
printf("EL EQUIPO GANADOR DE LA LIGA ES:");
for(i=1;i<=f;i++){
    aux = futbol[i].victorias * 3;
    aux2 = futbol[i].empates * 2;
    futbol[i].promedio = aux + aux2;
}
if (futbol[1].promedio>futbol[2].promedio && futbol[1].promedio>futbol[3].promedio){
    printf("%s\n\n",futbol[1].nombre_equipo);
}else{
    if (futbol[2].promedio>futbol[1].promedio && futbol[2].promedio>futbol[3].promedio){
        printf("%s\n\n",futbol[2].nombre_equipo);
    }else{
        if(futbol[3].promedio>futbol[1].promedio && futbol[3].promedio>futbol[2].promedio){
            printf("%s\n\n",futbol[3].nombre_equipo);
        }
    }
}
printf("EL MEJOR GOLEADOR DE LA LIGA ES:");
if (futbol[1].goles_goleador > futbol[2].goles_goleador && futbol[1].goles_goleador>futbol[3].goles_goleador){
    printf("%s",futbol[1].nombre_goleador);
}else{
    if(futbol[2].goles_goleador>futbol[1].goles_goleador && futbol[2].goles_goleador>futbol[3].goles_goleador ){
        printf("%s",futbol[2].nombre_goleador);
    }else{
        if(futbol[3].goles_goleador>futbol[1].goles_goleador && futbol[3].goles_goleador>futbol[2].goles_goleador){
            printf("%s",futbol[3].nombre_goleador);
        }
    }
}
system("pause");
}

void informacion_futbol(){
int num, i;
printf("\t\nUSTED DECIDIO VER INFORMACION DE EQUIPOS.\n\n");
for(i=1;i<=f;i++){
fflush(stdin);
printf("-Nombre del equipo N#%i.):%s\n",i,futbol[i].nombre_equipo);
printf("-Victorias optenidas:%i\n",futbol[i].victorias);
printf("-Derrotas optenidas:%i\n",futbol[i].derrotas);
printf("\n\n");
}
}

void registro_futbol(){
int num, i;
while(num!=2){
printf("\t\nUSTED DECIDIO REGISTRAR INFORMACION DE EQUIPOS.\n\n");
printf("ingrese un numero segun lo que desee hacer:\n");
printf("1.)Ingrese Informacion de un Equipo.\n");
printf("2.)Salir al Menu Anterior.\n");
printf("Ingrese numero:");
scanf("%i",&num);
switch(num){
case 1:
    system("cls");
    printf("Ingrese la cantidad de equipos que desee registrar:");
    scanf("%i",&f);
    for(i=1;i<=f;i++){
    fflush(stdin);
    printf("\n\n-%i.)Ingrese el nombre del equipo:",i);
    gets(futbol[i].nombre_equipo);
    printf("Ingrese las victorias optenidas:");
    scanf("%i",&futbol[i].victorias);
    printf("Ingrese las derrotas optendas:");
    scanf("%i",&futbol[i].derrotas);
    printf("Ingrese el numero de los empates optenidos por el equipo:");
    scanf("%i",&futbol[i].empates);
    printf("Ingrese los goles a favor del equipo:");
    scanf("%i",&futbol[i].goles_favor);
    printf("Ingrese los goles en contra del equipo:");
    scanf("%i",&futbol[i].goles_contra);
    printf("Ingrese el nombre del goleador:");
    scanf("%s",&futbol[i].nombre_goleador);
    fflush(stdin);
    printf("Ingrese los goles hechos por el goleador:");
    scanf("%i",&futbol[i].goles_goleador);
    }
    system("cls");
    break;

case 2:
      system("cls");
    printf("USTED DECIDIO REGRESAR A MENU DE FUTBOL.\n");
    system("pause");

    break;
    default:
        printf("...");
        break;
}
}
}

void menu_futbol(){
int num, i;
while(num!=4){
    system("cls");
    printf("\t\nUSTED DECIDIO VER INFORMACION DE FUTBOL.\n\n");
    printf("Ingrese un numero segun lo que desee hacer:\n");
    printf("1.)Ver Informacion De Los Equipos.\n");
    printf("2.)Registrar Informacion De Los Equipos.\n");
    printf("3.)Ver Informacion De La Liga.\n");
    printf("4.)Regresar al Menu De Inicio.\n");
    printf("Ingrese Numero:");
    scanf("%i",&num);
    switch(num){
    case 1:
    system("cls");
    informacion_futbol();
    system("pause");
    break;
case 2:
    system("cls");
    registro_futbol();
    system("pause");
    break;
case 3:
    system("cls");
    informacion_futbol_liga();
    system("pause");
    break;
case 4:
    system("cls");
    printf("USTED DECIDIO REGRESAR A MENU DE INICIO.");
    system("pause");
    system("cls");
    break;
    default:
        printf("...");
        break;


    }
}
}

struct equipo_baloncesto{
char nombre_equipo[30];
int victorias;
int derrotas ;
int promedio;
int perder_balon;
int rebotes_cogidos;
char nombre_triplero[30];
int anotacion_triplero;
}equipo[30];

void informacion_baloncesto_liga(){
int  salto, i, j, k,num,aux,min;
printf("\t\nUSTED DECIDIO VER LA INFORMACION DE LA LIGA DE BALONCESTO.\n\n");
printf("Aqui se mostrara la informacion del mejor equipo y los mejores tripleros.\n");
printf("EL MEJOR EQUIPO DE LA LIGA ES:\n");
for(i=1;i<=a;i++){
equipo[i].promedio = equipo[i].victorias - equipo[i].derrotas / 2;
}
if(equipo[1].promedio>equipo[2].promedio && equipo[1].promedio>equipo[3].promedio){
 fflush(stdin);
 printf("En el puesto N#%i esta El Equipo %s.\n",1,equipo[1].nombre_equipo);
 printf("Total de victorias:%i\n",equipo[1].victorias);
 printf("Total de derrotas:%i\n",equipo[1].derrotas);
}else{
    if (equipo[2].promedio>equipo[1].promedio && equipo[2].promedio>equipo[3].promedio ){
    printf("En el puesto N#%i esta El Equipo %s.\n",2,equipo[2].nombre_equipo);
    printf("Total de victorias:%i\n",equipo[2].victorias);
    printf("Total de derrotas:%i\n",equipo[2].derrotas);
    }else{
        if(equipo[3].promedio>equipo[2].promedio && equipo[3].promedio>equipo[1].promedio){
        printf("En el puesto N#%i esta El Equipo %s.\n",3,equipo[3].nombre_equipo);
        printf("Total de victorias:%i\n",equipo[3].victorias);
        printf("Total de derrotas:%i\n",equipo[3].derrotas);
        }
    }
}
printf("\nLOS MEJORES TRIPLEROS DE LA LIGA SON:\n");
for (i=1;i<=a;i++){
    printf("%i.)Nombre del triplero:%s\n",i,equipo[i].nombre_triplero);
    printf("Las anotaciones del triplero fueron:%i\n",equipo[i].anotacion_triplero);
}
system("pause");
}

void informacion_baloncesto(){
int num, i;
printf("\t\nUSTED DECIDIO VER INFORMACION DE EQUIPOS.\n\n");
for(i=1;i<=a;i++){
fflush(stdin);
printf("-Nombre del equipo N#%i.):%s\n",i,equipo[i].nombre_equipo);
printf("-Victorias optenidas:%i\n",equipo[i].victorias);
printf("-Derrotas optenidas:%i\n",equipo[i].derrotas);
printf("\n\n");
}
system("pause");
}

void registro_baloncesto(){
int num, i;
while(num!=2){
printf("\t\nUSTED DECIDIO REGISTRAR INFORMACION DE EQUIPOS.\n\n");
printf("ingrese un numero segun lo que desee hacer:\n");
printf("1.)Ingrese Informacion de un Equipo.\n");
printf("2.)Salir al Menu Anterior.\n");
printf("Ingrese numero:");
scanf("%i",&num);
switch(num){
case 1:
    system("cls");
    printf("Ingrese la cantidad de equipos que desee registrar:");
    scanf("%i",&a);
    for(i=1;i<=a;i++){
    fflush(stdin);
    printf("\n\n-%i.)Ingrese el nombre del equipo:",i);
    gets(equipo[i].nombre_equipo);
    printf("Ingrese las victorias optenidas:");
    scanf("%i",&equipo[i].victorias);
    printf("Ingrese las derrotas optendas:");
    scanf("%i",&equipo[i].derrotas);
    equipo[i].promedio = equipo[i].victorias + equipo[i].derrotas/2;
    printf("Ingrese las perdidas de balon acumuladas por los partidos:");
    scanf("%i",&equipo[i].perder_balon);
    printf("Ingrese los rebotes cogidos acumulados por los partidos:");
    scanf("%i",&equipo[i].rebotes_cogidos);
    printf("Ingrese el nombre del triplero del equipo:");
    scanf("%s",&equipo[i].nombre_triplero);
    fflush(stdin);
    printf("Ingrese el numero de anotaciones hechas por el triplero:");
    scanf("%i",&equipo[i].anotacion_triplero);
    }
    system("cls");
    break;

case 2:
      system("cls");
    printf("USTED DECIDIO REGRESAR A MENU DE BALONCESTO.\n");
    system("pause");
    break;
    default:
        printf("...");
        break;
}
}
}


void menu_baloncesto (){
int num, i;
while(num!=4){
system("cls");
printf("\t\nUSTED DECIDIO VER INFORMACION DE BALONCESTO.\n\n");
printf("Ingrese un numero segun lo que desee hacer:\n");
printf("1.)Ver Informacion De Los Equipos.\n");
printf("2.)Registrar Informacion De Los Equipos.\n");
printf("3.)Ver Informacion de la Liga.\n");
printf("4.)Regresar a Menu De Inicio.\n");
printf("Ingrese Numero:");
scanf("%i",&num);
switch(num){
case 1:
    system("cls");
    informacion_baloncesto();
    system("pause");
    break;
case 2:
    system("cls");
    registro_baloncesto();
    system("pause");
    break;
case 3:
    system("cls");
    informacion_baloncesto_liga();
    system("pause");
    break;
case 4:
    system("cls");
    printf("USTED DECIDIO REGRESAR A MENU DE INICIO.");
    system("pause");
    break;
    default:
        printf("...");
        break;

}
}

}

int main(){
    int i,a, num;
    while(num!=3){
    printf("\t\n BIEMVENIDO AL REGISTRO Y CONTROL DE LOS DIFERENTES DEPORTES. \n\n");
    printf("Ingrese un numero segun lo que desee hacer:\n");
    printf("1.)Informacion de Baloncesto.\n");
    printf("2.)Informacion de Futbol.\n");
    printf("3.)Cerrar el Programa.\n");
    printf("Ingrese Numero:");
    scanf("%i",&num);
    switch(num){
case 1:
    system("cls");
    menu_baloncesto();
    break;
case 2:
    system("cls");
    menu_futbol();
    break;
case 3:
    system("cls");
    printf("HASTA LUEGO, ESPERO HABER AYUDADO CON SUS NECESIDADES.\n");
    system("pause");

default:
    printf("...");
    break;
    }
    }
    return 0;
}
