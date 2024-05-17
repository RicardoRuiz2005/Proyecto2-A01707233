# Proyecto2-A01707233

Este gihub tiene la función de administrar el trabajo de los empleados y la producción de productos en una empresa.

### Problema

Una empresa necesita administrar bien sus recursos, esto se logra a traves de tener clara la función de cada empleado, que este realice su respectivo trabajo y a su vez, el echo de que crear sus productos, que, aunque otras empresas los puedan hacer, por lo que pueden existir sin la empresa, este programa facilita el administrar la cantidad de producción de cada producto, aparte de tener claro los datos de cada empleado y los datos de cada producto.

### Funcionamiento

- En la clase de empresa general puedes consultar datos referentes a cualquier empleado, asi como de cualquier producto, para tener claro quien esta en la empresa y que productos venden, a su vez, uno puede contratar empleados, la contratación se hace por medio de ingresar los datos del nuevo empleado al sistema.

- En la clase de Empleado (la cual es abstracta porque hereda a tres clases las cuales son jefe, director de operaciones y operador), se pueden hacer dos acciones, la primera es revisar los datos de los empleados, estos datos dicen su nombre, puesto y matricula; Posteriormente cada clase hija tiene la función de trabajar, aunque sea la misma orden para todos, cada uno se diferencia por su rango en la labor que va a ejercer, esto a traves de polimorfismo; Por ultimo el jefe es el unico que puede despedir a otro empleado.
  
- En la clase padre de productos, podemos ver que tiene dos funciones, el cual es el echo de ver los datos referentes a cada tipo de producto y tambien puede producir la cantidad otorgada de productos, debido a esto las clases hijas piden un dato extra el cual hace alusión si el producto es fisico o digital, para con eso producir el producto y la cotización de realizarlo.

### Considereaciones

Este codigo no funciona sin haber generado la empresa inicial, pues a la hora de correr el codigo se te preguntara el nombre de esta, ademas de la opción de agregar empleados, en el caso que no la crees, tampoco se podran generar los empleados, aunque los productos aun van a estar, pues existiran pero no seran producidos sin la empresa.

A su vez, el codigo debe de compilarse con C++.
