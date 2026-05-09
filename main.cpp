#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "mathfuncs.h"
#include "randfuncs.h"

using namespace std;

int main(int argc, char *argv[]) {
    srand(static_cast<unsigned>(time(nullptr)));

    const string EXIT = "quit";
    string command;

    do {
        cout << "calc: ";
        cin >> command;

        if ("help" == command) {
            cout << "help documentation" << endl;
            cout << "  help                 Show this help documentation" << endl;
            cout << "  quit                 Exit the calculator" << endl;
            cout << "  subtract <a> <b>     Subtract b from a" << endl;
            cout << "  multiply <a> <b>     Multiply a and b" << endl;
            cout << "  divide <a> <b>       Divide a by b" << endl;
            cout << "  flip                 Flip a coin (0=tails, 1=heads)" << endl;
            cout << "  d6                   Roll a six-sided die" << endl;
            cout << "  d20                  Roll a twenty-sided die" << endl;
            cout << endl;
        }
        else if ("subtract" == command) {
            double a, b;
            cin >> a >> b;
            cout << subtract(a, b) << endl;
        }
        else if ("multiply" == command) {
            double a, b;
            cin >> a >> b;
            cout << multiply(a, b) << endl;
        }
        else if ("divide" == command) {
            double a, b;
            cin >> a >> b;

            try {
                cout << divide(a, b) << endl;
            }
            catch (const invalid_argument& e) {
                cout << "error: " << e.what() << endl;
            }
        }
        else if ("flip" == command) {
            cout << flip_coin() << endl;
        }
        else if ("d6" == command) {
            cout << roll_d6() << endl;
        }
        else if ("d20" == command) {
            cout << roll_d20() << endl;
        }
        else if (EXIT == command) {
        }
        else {
            cout << "unknown command" << endl;
        }

    } while (EXIT != command);

    return 0;
}