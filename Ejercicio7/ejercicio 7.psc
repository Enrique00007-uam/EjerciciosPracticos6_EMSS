Proceso sin_titulo
	
	//Desarrolla un programa que solicite al usuario ingresar dos vectores
	//de igual longitud y luego calcule la suma de ambos vectores. El
	//resultado debe mostrarse en un tercer vector
	Definir n, i Como Entero; 
	Dimension vector1[1000], vector2[1000], vector3[1000];
	Definir vector1 Como Real;
	Definir vector2 Como Real;
	definir vector3 Como Real;
	Escribir "Ingrese la longitud de los vectores:";
	Leer n;
	
	Escribir "Ingrese los valores del primer vector:";
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Leer vector1[i];
	FinPara
	
	Escribir "Ingrese los valores del segundo vector:";
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Leer vector2[i];
	FinPara
	
	Para i <- 1 Hasta n Con Paso 1 Hacer
		vector3[i] <- vector1[i] + vector2[i];
	FinPara
	
	Escribir "La suma de los vectores es:";
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Escribir vector3[i];
	FinPara
FinProceso
