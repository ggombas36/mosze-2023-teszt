#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS használata a N_ELEMENTS helyett, rosszul definiált változó
    std::cout << '1-100 ertekek duplazasa' // hiányzó ;
    for (int i = 0;) // for ciklus általában 3 paraméterrel működik plusz ;-vel csak elválasztjuk a paramétereket nem zárjuk vele
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //végtelen ciklus lesz
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // a paraméter elválasztást ;-vel csináljuk és nem ,-vel
    {
        atlag += b[i] //ha szeretnénk növelni az értéket kell neki egy alap értéket adni, a sor nincs lezárva ;-vel
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
