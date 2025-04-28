#include <iostream>

using namespace std;

int main(){
    //Declaración de variable de la opcion
    int option;
    // Mensaje de las indicaciones de como funcionaria la indentificación
    cout << "Kraven, te ve, que eres: Una persona mala (1), Un animal (2) o Una persona cualquiera (3), Digite el numero:" << endl;
    //Aca se guarda la variable
    cin >> option;
    //Comienza las condiciones
    if (option == 1)
    {
        //SI es la opcion es igual a 1, que sos una mala personas, estas en la lista de presa de kravem
        cout << "Kraven vio que eres una mala persona, estas en su lista de presa, corre si no quieres morir" << endl;
    }
    else if (option == 2)
    {
        //Si es la opcion es igual 2, que sos un animal y kraven te protegera, no cumple que sea igual a 1
        cout << "Kraven vio que eres un animal, te acaricio y te protegio hasta tu casa" << endl;
    }
    else if (option == 3)
    {
        //SI es la opcion es igual a 3, que sos una persona cualquiera, no cumple que sea igual a 1, 2 o 3
        cout << "Kraven vio que solo eras una persona cualquiera, solo te saluda y se fue sin más, (tuviste miedo)" << endl;
    }
    else{
        //Si no cumple ninguna de las anteriores sucede lo sigueinte donde mueres por no mencionar bien lo que sos
        cout << "Kraven se queda con duda quien sos, y te mata por si acaso, y dice mejor a la proxima tenes que seguir las indicaciones. >:|" << endl;
    }
    
    return 0;
}
