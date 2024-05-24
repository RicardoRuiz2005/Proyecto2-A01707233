# Proyecto2-A01707233

Este gihub tiene la función de administrar el trabajo de los empleados y la producción de productos en una empresa.

### Problema

Una empresa necesita administrar bien sus recursos, esto se logra a traves de tener clara la función de cada empleado, que este realice su respectivo trabajo y a su vez, el hecho de que crear sus productos, que, aunque otras empresas los puedan hacer, por lo que pueden existir sin la empresa, este programa facilita el administrar la cantidad de producción de cada producto, aparte de tener claro los datos de cada empleado y los datos de cada producto.

### Funcionamiento

- En la clase de empresa general puedes consultar datos referentes a cualquier empleado, asi como de cualquier producto, para tener claro quien esta en la empresa y que productos venden, a su vez, uno puede contratar empleados, la contratación se hace por medio de ingresar los datos del nuevo empleado al sistema.

- En la clase de Empleado (la cual es abstracta porque hereda a tres clases las cuales son jefe, director de operaciones y operador), se pueden hacer dos acciones, la primera es revisar los datos de los empleados, estos datos dicen su nombre, puesto y matricula; Posteriormente cada clase hija tiene la función de trabajar, aunque sea la misma orden para todos, cada uno se diferencia por su rango en la labor que va a ejercer, esto a traves de polimorfismo; Por ultimo el jefe es el unico que puede despedir a otro empleado.
  
- En la clase padre de productos, podemos ver que tiene dos funciones, el cual es el echo de ver los datos referentes a cada tipo de producto y tambien puede producir la cantidad otorgada de productos, debido a esto las clases hijas piden un dato extra el cual hace alusión si el producto es fisico o digital, para con eso producir el producto y la cotización de realizarlo.

### Considereaciones

Este código no funcionaría sin haber generado la empresa inicial, pues a la hora de correr el código se te preguntará el nombre de esta. Además, tendrás la opción de agregar empleados, pero si no creas la empresa inicial, tampoco se podrán generar los empleados. Los productos aún estarán presentes en el sistema, ya que existirán en la base de datos, pero no serán producidos sin la empresa establecida.

En términos prácticos, si intentaras crear una "empresa doble" o múltiples empresas sin establecer una como la principal, el programa no tendría una empresa base para registrar empleados o producir productos. Esto podría causar errores durante la ejecución o incluso hacer que el programa no compile correctamente si se esperan objetos de empresa que no han sido inicializados.

Es importante asegurarse de establecer correctamente la empresa principal antes de intentar agregar empleados o producir productos para evitar problemas de este tipo. Además, el código debe compilarse con C++ para garantizar su correcto funcionamiento y compatibilidad con el entorno de desarrollo.
