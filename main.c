#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define password "deco123"
int main() {
    char clave[50];
    int opciones;
    float cantidad, precio, totalAPagar;
    char continuar;
    char detalles[100], fecha[50], hora[50];

    printf("Bienvenido a cecy.store\n");
    printf("Somos Yahel, Brandon, Santiago, Angel, Edwin, Danna y Mario\n");
    printf("La materia es Programacion\n");
    printf("La profesora es Victoria Gracia Ruano\n");
    printf("Las instrucciones para usar esta tienda en linea son:\n");
    printf("Elige alguna de las opciones\n");
    printf("1. Administrador\n");
    printf("2. Comprador\n");
    scanf("%d", &opciones);

    switch (opciones) {
        case 1:
            printf("Eligio la opcion 1: Administrador\n");
            while (1) {
                printf("Introduce la clave:\n");
                scanf("%s", clave);
                if (strcmp(clave, password) == 0) {
                    printf("Clave correcta\n");
                    printf("Bienvenido al sistema del vendedor\n");
                    printf("Aqui podra registrar sus ingresos y egresos\n");

                    do {
                        int opcionAdmin;
                        printf("Seleccione la opcion que desea:\n");
                        printf("1. Ingresos\n");
                        printf("2. Egresos\n");
                        printf("3. Salir\n");
                        scanf("%d", &opcionAdmin);

                        switch (opcionAdmin) {
                            case 1:
                                printf("Ingrese los detalles del ingreso:\n");
                                printf("Monto: ");
                                scanf("%f", &cantidad);
                                printf("Fecha (DD/MM/AAAA): ");
                                scanf("%s", fecha);
                                printf("Hora (HH:MM): ");
                                scanf("%s", hora);
                                printf("Detalles: ");
                                scanf(" %[^\n]s", detalles); // Leer cadena con espacios
                                printf("Ingreso registrado: $%.2f, Fecha: %s, Hora: %s, Detalles: %s\n", cantidad, fecha, hora, detalles);
                                break;
                            case 2:
                                printf("Ingrese los detalles del egreso:\n");
                                printf("Monto: ");
                                scanf("%f", &cantidad);
                                printf("Fecha (DD/MM/AAAA): ");
                                scanf("%s", fecha);
                                printf("Hora (HH:MM): ");
                                scanf("%s", hora);
                                printf("Detalles: ");
                                scanf(" %[^\n]s", detalles); // Leer cadena con espacios
                                printf("Egreso registrado: $%.2f, Fecha: %s, Hora: %s, Detalles: %s\n", cantidad, fecha, hora, detalles);
                                break;
                            case 3:
                                printf("Saliendo del sistema de administrador...\n");
                                break;
                            default:
                                printf("Opcion no valida\n");
                        }
                        if (opcionAdmin == 3) break;

                        printf("¿Desea continuar? (s/n): ");
                        scanf(" %c", &continuar);
                    } while (continuar == 's' || continuar == 'S');
                    break;
                } else {
                    printf("Clave incorrecta\n");
                }
            }
            break;

        case 2:
            printf("Eligio la opcion 2: Comprador\n");
            do {
                int opcionComprador;
                printf("Seleccione el producto que desea comprar:\n");
                printf("1. Refrigerador ($500)\n");
                printf("2. Lavadora ($300)\n");
                printf("3. Microondas ($150)\n");
                printf("4. Aspiradora ($200)\n");
                printf("5. Lavavajillas ($400)\n");
                printf("6. Salir\n");
                scanf("%d", &opcionComprador);

                switch (opcionComprador) {
                    case 1:
                        precio = 500;
                        break;
                    case 2:
                        precio = 300;
                        break;
                    case 3:
                        precio = 150;
                        break;
                    case 4:
                        precio = 200;
                        break;
                    case 5:
                        precio = 400;
                        break;
                    case 6:
                        printf("Saliendo...\n");
                        break;
                    default:
                        printf("Opcion no valida\n");
                        continue;
                }

                if (opcionComprador == 6) break;

                printf("Ingrese la cantidad que desea comprar: ");
                scanf("%f", &cantidad);
                totalAPagar = precio * cantidad;
                printf("El total a pagar es: $%.2f\n", totalAPagar);

                printf("¿Desea continuar comprando? (s/n): ");
                scanf(" %c", &continuar);
            } while (continuar == 's' || continuar == 'S');
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}

