#include <iostream>
#include <string>
#include <list>

using namespace std;

class Persona {
public:
    int id;
    string nombre;
    string apellido;
    string sexo;
    int edad;
};

class Profesor : public Persona {
public:
    string tituloProfesion;
    string cedulaProfesional;
};

class Materia {
public:
    int id;
    string nombre;
    int creditos;
    string profesor;
};

class Alumno : public Persona {
public:
    int numControl;
    int semestre;
    list<string> materias;
};

int main() {
    list<Profesor> profesores;
    list<Materia> materias;
    list<Alumno> alumnos;

    int opcionPrincipal;

    while (true) {
        cout << "Bienvenido al sistema de gestión escolar, revise las opciones y seleccione la que desee realizar:\n"
             << "Menú Principal:\n"
             << "1. Profesor\n"
             << "2. Materia\n"
             << "3. Alumno\n"
             << "4. Salir\n"
             << "Ingrese su opción: ";
        cin >> opcionPrincipal;

        if (opcionPrincipal == 1) {
            cout << "Por disposición se requiere que introduzca la información de 3 profesores.\n";

            // Captura de profesores
            for (int i = 0; i < 3; ++i) {
                Profesor nuevoProfesor;
                cout << "Captura de Profesor " << i + 1 << ":\n";
                cout << "ID: ";
                cin >> nuevoProfesor.id;
                cout << "Nombre: ";
                cin.ignore(); // Borrar la linea del input previo
                getline(cin, nuevoProfesor.nombre);
                cout << "Apellido: ";
                getline(cin, nuevoProfesor.apellido);
                cout << "Sexo (F/M): ";
                cin >> nuevoProfesor.sexo;
                cout << "Edad: ";
                cin >> nuevoProfesor.edad;
                cout << "Título o profesión: ";
                cin.ignore(); // Borrar la linea del input previo
                getline(cin, nuevoProfesor.tituloProfesion);
                cout << "No. de Cédula profesional: ";
                getline(cin, nuevoProfesor.cedulaProfesional);
                profesores.push_back(nuevoProfesor);
            }

            while (true) {
                int opcionProfesor;
                cout << "Menú de Opciones (Profesores):\n"
                     << "1. Adición de Registros\n"
                     << "2. Visualización de Registros\n"
                     << "3. Regresar al Menú Principal\n"
                     << "Ingrese su opción: ";
                cin >> opcionProfesor;

         if (opcionProfesor == 1) {
                    Profesor nuevoProfesor;
                    cout << "Por favor ingresa la información correspondiente:\n";
                    cout << "ID: ";
                    cin >> nuevoProfesor.id;
                    cout << "Nombre: ";
                    cin >> nuevoProfesor.nombre;
                    cout << "Apellido: ";
                    cin >> nuevoProfesor.apellido;
                    cout << "Sexo (F/M): ";
                    cin >> nuevoProfesor.sexo;
                    cout << "Edad: ";
                    cin >> nuevoProfesor.edad;
                    cout << "Título o profesión: ";
                    cin >> nuevoProfesor.tituloProfesion;
                    cout << "No. de Cédula profesional: ";
                    cin >> nuevoProfesor.cedulaProfesional;

                    profesores.push_back(nuevoProfesor);

                    int regresar;
                    cout << "Deseas: 1) Regresar Menú Principal.  2) Regresar al menú de opciones (Profesores)\n";
                    cin >> regresar;
                    if (regresar == 1) {
                        break;
                    }
                } else if (opcionProfesor == 2) {
                    int id;
                    bool encontrado = false;
                    cout << "Por favor ingresa el ID del profesor a visualizar: ";
                    cin >> id;

                    for (const Profesor& profesor : profesores) {
                        if (profesor.id == id) {
                            encontrado = true;
                            cout << "Información del profesor:\n"
                                 << "ID: " << profesor.id << "\n"
                                 << "Nombre: " << profesor.nombre << "\n"
                                 << "Apellido: " << profesor.apellido << "\n"
                                 << "Sexo (S/F): " << profesor.sexo << "\n"
                                 << "Edad: " << profesor.edad << "\n"
                                 << "Título o profesión: " << profesor.tituloProfesion << "\n"
                                 << "No. de Cédula profesional: " << profesor.cedulaProfesional << "\n";
                            break;
                        }
                    }

                    if (!encontrado) {
                        cout << "Registro no encontrado\n";
                    }

                    int regresar;
                    cout << "Deseas: 1) Regresar Menú Principal.  2) Regresar al menú de opciones (Profesores)\n";
                    cin >> regresar;
                    if (regresar == 1) {
                        break;
                    }
                } else if (opcionProfesor == 3) {
                    break;
                }
            }
        } else if (opcionPrincipal == 2) {
            cout << "Por disposición se requiere que introduzca la información de 4 materias.\n";

            // Captura de materias
            for (int i = 0; i < 4; ++i) {
                Materia nuevaMateria;
                cout << "Captura de Materia " << i + 1 << ":\n";
                cout << "ID: ";
                cin >> nuevaMateria.id;
                cout << "Nombre: ";
                cin.ignore(); // Borrar la linea del input previo
                getline(cin, nuevaMateria.nombre);
                cout << "Número de créditos: ";
                cin >> nuevaMateria.creditos;
                cout << "Profesor que la imparte (Nombre y Apellido): ";
                cin.ignore(); // Borrar la linea del input previo
                getline(cin, nuevaMateria.profesor);
                materias.push_back(nuevaMateria);
            }

            while (true) {
                int opcionMateria;
                cout << "Menú de Opciones (Materias):\n"
                     << "1. Adición de Registros\n"
                     << "2. Visualización de Registros\n"
                     << "3. Regresar al Menú Principal\n"
                     << "Ingrese su opción: ";
                cin >> opcionMateria;

             if (opcionMateria == 1) {
                    Materia nuevaMateria;
                    cout << "Por favor ingresa la información correspondiente:\n";
                    cout << "ID: ";
                    cin >> nuevaMateria.id;
                    cout << "Nombre: ";
                    cin.ignore(); // Borrar la linea del input previo
                    getline(cin, nuevaMateria.nombre);
                    cout << "Número de créditos: ";
                    cin >> nuevaMateria.creditos;
                    cout << "Profesor que la imparte (Nombre y Apellido): ";
                    cin.ignore(); // Borrar la linea del input previo
                    getline(cin, nuevaMateria.profesor);

                    materias.push_back(nuevaMateria);

                    int regresar;
                    cout << "Deseas: 1) Regresar Menú Principal.  2) Regresar al menú de opciones (Materias)\n";
                    cin >> regresar;
                    if (regresar == 1) {
                        break;
                    }
                } else if (opcionMateria == 2) {
                    int id;
                    bool encontrado = false;
                    cout << "Por favor ingresa el ID de la materia a visualizar: ";
                    cin >> id;

                    for (const Materia& materia : materias) {
                        if (materia.id == id) {
                            encontrado = true;
                            cout << "Información de la materia:\n"
                                 << "ID: " << materia.id << "\n"
                                 << "Nombre: " << materia.nombre << "\n"
                                 << "Número de créditos: " << materia.creditos << "\n"
                                 << "Profesor que la imparte: " << materia.profesor << "\n";
                            break;
                        }
                    }

                    if (!encontrado) {
                        cout << "Registro no encontrado\n";
                    }

                    int regresar;
                    cout << "Deseas: 1) Regresar Menú Principal.  2) Regresar al menú de opciones (Materias)\n";
                    cin >> regresar;
                    if (regresar == 1) {
                        break;
                    }
                } else if (opcionMateria == 3) {
                    break;
                }
            }
        } else if (opcionPrincipal == 3) {
            cout << "Por disposición se requiere que introduzca la información de 3 alumnos.\n";

            // Captura de alumnos
            for (int i = 0; i < 3; ++i) {
                Alumno nuevoAlumno;
                cout << "Captura de Alumno " << i + 1 << ":\n";
                cout << "ID: ";
                cin >> nuevoAlumno.id;
                cout << "Nombre: ";
                cin.ignore(); // Borrar la linea del input previo
                getline(cin, nuevoAlumno.nombre);
                cout << "Apellido: ";
                getline(cin, nuevoAlumno.apellido);
                cout << "No. de Control Escolar: ";
                cin >> nuevoAlumno.numControl;
                cout << "Edad: ";
                cin >> nuevoAlumno.edad;
                cout << "Sexo (F/M): ";
                cin >> nuevoAlumno.sexo;
                cout << "Semestre: ";
                cin >> nuevoAlumno.semestre;

                int numMaterias;
                cout << "Número de materias que cursará: ";
                cin >> numMaterias;
                cout << "Ingrese los nombres de las materias una por una:\n";
                cin.ignore(); // Borrar la linea del input previo
                for (int j = 0; j < numMaterias; ++j) {
                    string materia;
                    getline(cin, materia);
                    nuevoAlumno.materias.push_back(materia);
                }

                alumnos.push_back(nuevoAlumno);
            }

            while (true) {
                int opcionAlumno;
                cout << "Menú de Opciones (Alumnos):\n"
                     << "1. Adición de Registros\n"
                     << "2. Visualización de Registros\n"
                     << "3. Regresar al Menú Principal\n"
                     << "Ingrese su opción: ";
                cin >> opcionAlumno;

                if (opcionAlumno == 1) {
                    Alumno nuevoAlumno;
                    cout << "Por favor ingresa la información correspondiente:\n";
                    cout << "ID: ";
                    cin >> nuevoAlumno.id;
                    cout << "Nombre: ";
                    cin.ignore(); // Borrar la linea del input previo
                    getline(cin, nuevoAlumno.nombre);
                    cout << "Apellido: ";
                    cin.ignore(); // Borrar la linea del input previo
                    getline(cin, nuevoAlumno.apellido);
                    cout << "No. de Control Escolar: ";
                    cin >> nuevoAlumno.numControl;
                    cout << "Edad: ";
                    cin >> nuevoAlumno.edad;
                    cout << "Sexo (F/M): ";
                    cin >> nuevoAlumno.sexo;
                    cout << "Semestre: ";
                    cin >> nuevoAlumno.semestre;

                    int numMaterias;
                    cout << "Número de materias que cursará: ";
                    cin >> numMaterias;
                    cout << "Ingrese los nombres de las materias una por una:\n";
                    cin.ignore(); // Borrar la linea del input previo
                    for (int i = 0; i < numMaterias; ++i) {
                        string materia;
                        getline(cin, materia);
                        nuevoAlumno.materias.push_back(materia);
                    }

                    alumnos.push_back(nuevoAlumno);

                    int regresar;
                    cout << "Deseas: 1) Regresar Menú Principal.  2) Regresar al menú de opciones (Alumnos)\n";
                    cin >> regresar;
                    if (regresar == 1) {
                        break;
                    }
                } else if (opcionAlumno == 2) {
                    int id;
                    bool encontrado = false;
                    cout << "Por favor ingresa el ID del alumno a visualizar: ";
                    cin >> id;

                    for (const Alumno& alumno : alumnos) {
                        if (alumno.id == id) {
                            encontrado = true;
                            cout << "Información del alumno:\n"
                                 << "ID: " << alumno.id << "\n"
                                 << "Nombre: " << alumno.nombre << "\n"
                                 << "Apellido: " << alumno.apellido << "\n"
                                 << "No. de Control Escolar: " << alumno.numControl << "\n"
                                 << "Edad: " << alumno.edad << "\n"
                                 << "Sexo (F/M): " << alumno.sexo << "\n"
                                 << "Semestre: " << alumno.semestre << "\n"
                                 << "Materias que cursará:\n";
                            for (const string& materia : alumno.materias) {
                                cout << "  - " << materia << "\n";
                            }
                            break;
                        }
                    }

                    if (!encontrado) {
                        cout << "Registro no encontrado\n";
                    }

                    int regresar;
                    cout << "Deseas: 1) Regresar Menú Principal.  2) Regresar al menú de opciones (Alumnos)\n";
                    cin >> regresar;
                    if (regresar == 1) {
                        break;
                    }
                } else if (opcionAlumno == 3) {
                    break;
                }
            }
        } else if (opcionPrincipal == 4) {
            cout << "Gracias por utilizar el sistema de gestión escolar\n";
            break;
        }
    }

    return 0;
}