Proceso sin_titulo
	
		
		Escribir "Matriz 1";
		Dimension Matriz1[3,3];
		Dimension transpuesta[3,3];
		definir i, j Como Real;
		definir matriz1, transpuesta Como Real;
		i <- 0;
		j <- 0;
		
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				Escribir "Escribe un numero: Fila ", i, ", columna ", j, ":";
				Leer Matriz1[i-1, j-1];
			FinPara
		FinPara
		
		
			
		
		
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				transpuesta[j-1, i-1] <- Matriz1[i-1, j-1];
			FinPara
		FinPara
		
		
		
		Escribir "";
		Para i <- 1 hasta 3 con paso 1 hacer
			Para j <- 1 hasta 3 con paso 1 hacer
				Escribir transpuesta[i-1, j-1], " ";
			FinPara
			Escribir "";
		FinPara
		


FinProceso
