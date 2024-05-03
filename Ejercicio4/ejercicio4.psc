Proceso sin_titulo
	Definir sumaC Como entero;
	Definir promedio Como Real;
	Definir calificaciones Como Entero;
	Definir i como real;
	
sumaC <- 0;
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Escribe la calificacon ", i;
		leer calificaciones;
		sumaC <- sumaC + calificaciones;
		
		
	FinPara
	promedio <- sumaC/10;
	Escribir "el promedio es: ", promedio;
	
FinProceso
