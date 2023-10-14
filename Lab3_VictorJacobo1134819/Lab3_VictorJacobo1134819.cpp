#include <iostream>

using namespace std;

//int Carrera()
//{
//    int posicionTortuga[70];
//    int posicionLiebre[70];
//    int movimientoTortuga, movimientoLiebre;
//    
//    cout << "Presione 1 para inciar la carrera";
//}

int main()
{
    int n;
    int pasoTortuga = 0;
    int pasoLiebre = 0;
    int posicionTortuga[70];
    int posicionLiebre[70];
    int movimientoTortuga;
    int movimientoLiebre;
    int* pointerTortuga = &pasoTortuga;
    int* pointerLiebre = &pasoLiebre;

    for (int i = 0; i < 70; i++)
    {
        posicionLiebre[i] = 0;
        posicionTortuga[i] = 0;
    }
    cout << "Presione 1 para inciar la carrera. \n";
    cin >> n;
    if (n == 1)
    {
        cout << "Preparados?... \n";
        cin;
        cout << "Listos?... \n";
        cin;
        cout << "Comienza! \n";

        while (posicionLiebre[69] != *pointerLiebre || posicionTortuga[69] != *pointerTortuga)
        {
            movimientoLiebre = rand() % 10 + 1;
            movimientoTortuga = rand() % 10 + 1;

            if (movimientoTortuga <= 5)
            {
                cout << "Tortuga da un paso veloz!! \n";
                pasoTortuga = pasoTortuga + 3;
                if (pasoTortuga >= 69)
                {
                    pasoTortuga = 69;
                }
                else if (pasoTortuga < 1)
                {
                    pasoTortuga = 0;
                }
                posicionTortuga[pasoTortuga] = 1;
            }
            else if (movimientoTortuga == 6 || movimientoTortuga == 7)
            {
                cout << "La tortuga se respalo!! \n";
                pasoTortuga = pasoTortuga - 6;

                if (pasoTortuga >= 69)
                {
                    pasoTortuga = 69;
                }
                else if (pasoTortuga < 1)
                {
                    pasoTortuga = 0;
                }
                posicionTortuga[pasoTortuga] = 1;

            }
            else if (movimientoTortuga == 8 || movimientoTortuga == 9 || movimientoTortuga == 10)
            {
                cout << "La tortuga da un paso lento!! \n";
                pasoTortuga = pasoTortuga + 1;

                if (pasoTortuga >= 69)
                {
                    pasoTortuga = 69;
                }
                else if (pasoTortuga < 1)
                {
                    pasoTortuga = 0;
                }
                posicionTortuga[pasoTortuga] = 1;
            }

            if (movimientoLiebre == 1 || movimientoLiebre == 2)
            {
                cout << "La liebre se duerme! \n";
                cout << "ZzZz... \n";
                pasoLiebre = pasoLiebre + 0;
                if (pasoLiebre >= 69)
                {
                    pasoLiebre = 69;
                }
                else if (pasoLiebre < 1)
                {
                    pasoLiebre = 0;
                }
                posicionLiebre[pasoLiebre] = 1;
            }
            else if (movimientoLiebre == 3 || movimientoLiebre == 4)
            {
                cout << "La liebre da un gran salto!!! \n";
                pasoLiebre = pasoLiebre + 9;
                pasoLiebre = pasoLiebre + 0;
                if (pasoLiebre >= 69)
                {
                    pasoLiebre = 69;
                }
                else if (pasoLiebre < 1)
                {
                    pasoLiebre = 0;
                }
                posicionLiebre[pasoLiebre] = 1;
            }
            else if (movimientoLiebre == 5)
            {
                cout << "La liebre se dio un gran resbalon!!! \n";
                pasoLiebre = pasoLiebre - 12;
                pasoLiebre = pasoLiebre + 0;
                if (pasoLiebre >= 69)
                {
                    pasoLiebre = 69;
                }
                else if (pasoLiebre < 1)
                {
                    pasoLiebre = 0;
                }
                posicionLiebre[pasoLiebre] = 1;
            }
            else if (movimientoLiebre == 6 || movimientoLiebre == 7 || movimientoLiebre == 8)
            {
                cout << "La liebre da un salto pequeño! \n";
                pasoLiebre = pasoLiebre + 1;
                pasoLiebre = pasoLiebre + 0;
                if (pasoLiebre >= 69)
                {
                    pasoLiebre = 69;
                }
                else if (pasoLiebre < 1)
                {
                    pasoLiebre = 0;
                }
                posicionLiebre[pasoLiebre] = 1;
            }
            else if (movimientoLiebre == 9 || movimientoLiebre == 10)
            {
                cout << "La liebre se da un resbalon pequeño! \n";
                pasoLiebre = pasoLiebre - 2;
                pasoLiebre = pasoLiebre + 0;
                if (pasoLiebre >= 69)
                {
                    pasoLiebre = 69;
                }
                else if (pasoLiebre < 1)
                {
                    pasoLiebre = 0;
                }
                posicionLiebre[pasoLiebre] = 1;
            }
            cout << "========================================================= \n";
            cout << "\n";
            cin;
        }

        if (pointerLiebre[70] == *pointerLiebre)
        {
            cout << "La liebre gana. Ni hablar :( \n";
        }
        else if (posicionTortuga[70] == *pointerTortuga)
        {
            cout << "La tortuga gana!!! Bravo!!! \n";
        }
        cin;
    }
}
