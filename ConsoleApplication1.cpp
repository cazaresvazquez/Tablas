//El programa muestra primero una tabla de notas con sus
//equivalentes en el Standard Grading System o el sistema utilizado
//en los Estados Unidos
//que va desde la A hasta la F. El programa preguntará al
//usuario su nota y transformará ese resultado al
//equivalente en el Standard Grading System. También el
//programa dará una pequeña pero valiosa
//recomendación al usuario respecto a su nivel de estudio y
//calidad como
//estudiante.

#include <stdio.h>
#include <windows.h>

void clrscr()/*Creando funcion para limpiar
pantalla.*/

{

	HANDLE hStdOut =
		GetStdHandle(STD_OUTPUT_HANDLE);

	COORD coord = { 0, 0 };

	DWORD count;

	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(hStdOut,
		&csbi);

	FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X *
		csbi.dwSize.Y, coord, &count);

	SetConsoleCursorPosition(hStdOut, coord);

}

void main()

{

	int salir, saliryesno;

	salir = 0;

	while (salir == 0) {

		clrscr();/*Llamando la funcion para limpiar
		pantalla.*/

		int a;

		float nota;

		printf("ntttNOTASttEQUIVALENTEn");

		printf("tt 9.0 – 10.0tt An");

		printf("tt 8.5 – 8.9tt B+n");

		printf("tt 8.0 – 8.4tt Bn");

		printf("tt 7.5 – 7.9tt C+n");

		printf("tt 7.0 – 7.4tt Cn");

		printf("tt 6.0 – 6.9tt Dn");

		printf("tt 0.0 – 6.0tt Fn");

		a = 0;

		while (a == 0) {

			printf("nIntroduzca su nota en Programacion II:");
				
			scanf("%f", &nota);
				
			if (nota < 0 || nota>10) {

				/*a sigue valiendo cero y no se sale del
				ciclo*/

			}

			else {

				a = 1;

			}

		}

		if (nota >= 9) {

			printf("nNOTA EQUIVALENTE EN STANDARD GRADING SYSTEM: An");
				

				printf("RECOMENDACIONES: Excelente, si continua asi usted es un genio.nn");
					

		}

		else {

			if (nota >= 8.5) {

				printf("nNOTA EQUIVALENTE EN STANDARD GRADING SYSTEM: B + n");

					
					printf("RECOMENDACIONES: Muy bien, su nivel es impresionante.nn");

						
			}

			else {

				if (nota >= 8) {

					printf("nNOTA EQUIVALENTE EN STANDARD GRADING SYSTEM: Bn");
						

						printf("RECOMENDACIONES: Bien, su nivel es muy bueno.nn");

							

				}

				else {

					if (nota >= 7.5) {

						printf("nNOTA EQUIVALENTE EN STANDARD GRADING SYSTEM: C + n");
							

							printf("RECOMENDACIONES: Usted esta dentro del promedio, trate de no bajar.nn");
								

					}

					else {

						if (nota >= 7) {

							printf("nNOTA EQUIVALENTE EN STANDARD GRADING SYSTEM: Cn");
								

								printf("RECOMENDACIONES: Usted la va pasando, pero trate elevar su promedio.nn");

								
						}

						else {

							if (nota >= 6) {

								printf("nNOTA EQUIVALENTE EN STANDARD GRADING SYSTEM: Dn");
									

									printf("RECOMENDACIONES: Usted esta en la cuerda floja, un pequeno descuido nlo pone en problemas.nn");
										

							}

							else {/*nota mayor que cero pero menor que
							6.*/

								printf("nNOTA EQUIVALENTE EN STANDARD GRADING SYSTEM: Fn");
									

									printf("RECOMENDACIONES: Su nota sinceramente es mala, busque nuevas ntecnicas de estudio.nn");

										
							}

						}

					}

				}

			}

		}

		printf("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO : ");
			

		scanf("%d", &saliryesno);

		if (saliryesno == 1) {

			salir = 1;

		}

	}

}