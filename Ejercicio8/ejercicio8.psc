Proceso sin_titulo
	
	//Crea un programa que permita al usuario ingresar dos vectores de la
	//misma longitud y luego calcule su producto punto. Muestra el resultado
	//al finalizar el cálculo
	Definir n, i Como Entero; 
		Dimension vector1[1000], vector2[1000];
		Definir vector1 Como Real;
		Definir vector2 Como Real;
		definir producto Como Real;
		Escribir "Escriba la longitud de los vectores:";
		Leer n;
		
		Escribir "Escriba los numeros del  vector 1:";
		Para i <- 1 Hasta n Con Paso 1 Hacer
			Leer vector1[i];
		FinPara
		
		Escribir "Escriba los numeros del vector 2";
		Para i <- 1 Hasta n Con Paso 1 Hacer
			Leer vector2[i];
		FinPara
		producto <- 0;
		Para i <- 1 Hasta n Con Paso 1 Hacer
			producto <- producto +vector1[i] * vector2[i];
		FinPara
		
		Escribir "El producto punto de los vectores es:";
		
			Escribir producto;
		


FinProceso
