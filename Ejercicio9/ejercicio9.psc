Proceso sin_titulo
	
		Escribir "Matriz 1";
		Dimension Matriz1[3,3];
		Dimension Matriz2[3,3];
		Dimension Matriz3[3,3];
		definir i, j Como Real;
		definir matriz1, Matriz2, Matriz3 Como Real;
		i <- 0;
		j <- 0;
		
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				Escribir "Escribe un numero: Fila ", i, ", columna ", j, ":";
				Leer Matriz1[i-1, j-1];
			FinPara
		FinPara
		
		Escribir "Matriz 2";
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				Escribir "Escribe un numero: Fila ", i, ", columna ", j, ":";
				Leer Matriz2[i-1, j-1];
			FinPara
		FinPara
		
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				Matriz3[i-1, j-1] <- Matriz1[i-1, j-1] * Matriz2[i-1, j-1];
			FinPara
		FinPara
		
		Escribir "";
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				Escribir Matriz1[i-1, j-1], " ";
			FinPara
			Escribir "";
		FinPara
		
		Escribir "";
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				Escribir Matriz2[i-1, j-1], " ";
			FinPara
			Escribir "";
		FinPara
		
		Escribir "";
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				Escribir Matriz3[i-1, j-1], " ";
			FinPara
			Escribir "";
		FinPara

FinProceso
