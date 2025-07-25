#include <iostream>
#include <string>

void printHeader() {
    std::cout << "=======================================================" << std::endl;
    std::cout << "        Einfacher Arduino Taschenrechner               " << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << "Geben Sie eine Berechnung im Format 'Zahl Operator Zahl' ein." << std::endl;
    std::cout << "Erlaubte Operatoren sind +, -, * und /." << std::endl;
    std::cout << "Beispiel: 12.5 * 2" << std::endl;
    std::cout << "Geben Sie 'exit' ein, um das Programm zu beenden." << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
}

int main()
{
    printHeader();

    std::string userInput;

    while (true)
    {
        std::cout << "\nIhre Eingabe: " << std::flush;

        std::getline(std::cin, userInput);

        if (userInput == "exit") {
            std::cout << "Programm wird beendet." << std::endl;
            break;
        }

        std::cout << "An Arduino gesendet (simuliert): " << userInput << std::endl;
        std::string mockResult = "Ergebnis: 25.0 (simuliert)";

        std::cout << mockResult << std::endl;
    }

    return 0;
}