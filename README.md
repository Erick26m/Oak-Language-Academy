# Oak-Language-Academy
Proyecto Integrador POO

Mi proyecto consiste en un sistema básico para administrar una academia de idiomas. El sistema permite representar estudiantes, profesores, inscripciones y cursos. Utilicé una clase madre llamada Persona, ya que tanto los estudiantes como los profesores comparten datos como nombre, edad y matrícula. A partir de esta clase se crean las clases hijas Estudiante y Profesor.

La idea principal del sistema es simular cómo una academia puede registrar estudiantes, asociarlos a una inscripción, asignarles cursos y mostrar información general de las personas que forman parte de la institución.

 ## Diagrama UML
<img width="1133" height="802" alt="image" src="https://github.com/user-attachments/assets/cd90b53b-9400-4e12-b1c7-5992acd46f5e" />


## Funcionalidad
El sistema Oak Language Academy está compuesto por 5 clases principales que mantienen relaciones claras entre sí: Persona, Estudiante, Profesor, Inscripcion y Curso.

La clase Persona funciona como una clase abstracta que contiene la información común de cualquier persona dentro de la academia, como nombre, edad y matrícula. A partir de esta clase se derivan Estudiante y Profesor mediante herencia. Además, se utiliza un método virtual puro llamado obtenerResumen(), lo que permite aplicar polimorfismo correctamente.

La clase Estudiante representa a los alumnos inscritos en la academia. Esta clase almacena información adicional como promedio, nivel académico, meta académica, inscripción y curso asignado. También cuenta con métodos para calcular el promedio y asignar cursos.

La clase Profesor representa al personal docente encargado de asignar cursos a los estudiantes. Además de los atributos heredados de Persona, cada profesor cuenta con un idioma que enseña y años de experiencia. Esta clase puede asignar cursos a estudiantes usando métodos sobrecargados.

La clase Inscripcion administra la información relacionada con el tipo de inscripción del estudiante, incluyendo el tipo, costo y duración en meses. Esta información permite representar el plan académico que tiene cada estudiante dentro de la academia.

La clase Curso representa los cursos ofrecidos por la academia. En ella se almacena información como el nombre del curso, objetivo, duración en horas y nivel. Esto permite organizar los cursos de acuerdo con el nivel y las metas académicas de los estudiantes.

## Consideraciones
Casos donde el proyecto podría dejar de funcionar:

Registrar una persona con edad menor o igual a 0.

Registrar dos personas con la misma matrícula.

Crear una inscripción con costo negativo.

Crear una inscripción con duración menor o igual a 0.

Asignar un curso inexistente a un estudiante.
