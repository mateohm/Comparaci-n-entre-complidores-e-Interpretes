# Comparacion Entre Complidores e Interpretes

- La actividad consistió en comparar el rendimiento entre un lenguaje compilado (C) y uno interpretado (Python) utilizando el algoritmo del factorial en dos versiones: iterativa y recursiva. 

- Se evaluaron el tiempo de ejecución y el uso de memoria para distintos valores de entrada, ejecutando ambos programas en la misma arquitectura. Los resultados se representaron en dos gráficas comparativas y se analizaron las diferencias de eficiencia entre los lenguajes y los métodos utilizados.

1. Tiempo
   
    C ejecuta más rápido tanto en forma iterativa como recursiva.

    Python recursivo escala mal con n grande debido a su manejo de pila.


<img width="1107" height="655" alt="image" src="https://github.com/user-attachments/assets/6dd1d77d-807f-4858-a1f9-54e80b85c1c0" />

La gráfica muestra que C es consistentemente más rápido que Python, tanto en la versión iterativa como en la recursiva. Esto se debe a que C es un lenguaje compilado, lo que permite una ejecución más cercana al hardware.
Además, se observa que Python recursivo incrementa su tiempo de forma notable al aumentar el valor de n, debido a la sobrecarga del manejo de llamadas recursivas en su intérprete, mientras que C mantiene un crecimiento más controlado.


2. Memoria
   
    - Python recursivo usa mucha más memoria por el manejo interno del stack.

    - C es mucho más eficiente en el manejo de memoria para ambos casos.



<img width="1102" height="625" alt="image" src="https://github.com/user-attachments/assets/99ba6839-830d-46e1-84cc-f5bddad913d2" />


En esta gráfica se evidencia que Python recursivo consume mucha más memoria, especialmente para valores grandes de n, ya que cada llamada recursiva ocupa espacio en la pila de ejecución.
En cambio, C usa significativamente menos memoria en ambos métodos, gracias a su eficiencia en la gestión de recursos y menor sobrecarga en el sistema. La versión iterativa, en ambos lenguajes, es la más eficiente en cuanto a memoria.
