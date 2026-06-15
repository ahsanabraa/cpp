#include <iostream>
using namespace std;
int main()
{
    cout << "Logika AND" << endl;
    cout << "1&&1=" << (1 && 1) << endl;
    cout << "1&&0=" << (1 && 0) << endl;
    cout << "0&&1=" << (0 && 1) << endl;
    cout << "0&&0=" << (0 && 0) << endl;
    cout << endl;

    cout << "Logika OR" << endl;
    cout << "1||1=" << (1 || 1) << endl;
    cout << "1||0=" << (1 || 0) << endl;
    cout << "0||1=" << (0 || 1) << endl;
    cout << "0||0=" << (0 || 0) << endl;
    cout << endl;

    cout << "Logika NOT" << endl;
    cout << "!1=" << (!1) << endl;
    cout << "!0=" << (!0) << endl;
    cout << endl;

    cout << "Logika XOR" << endl;
    cout << "1^1=" << (1 ^ 1) << endl;
    cout << "1^0=" << (1 ^ 0) << endl;
    cout << "0^1=" << (0 ^ 1) << endl;
    cout << "0^0=" << (0 ^ 0) << endl;
    cout << endl;

    cout << "Logika NAND" << endl;
    cout << "1(1&&1)=" << !(1 && 1) << endl;
    cout << "!(1&&0)=" << !(1 && 0) << endl;
    cout << "!(0&&1)=" << !(0 && 1) << endl;
    cout << "!(0&&0)=" << !(0 && 0) << endl;
    cout << endl;

    cout << "Logika NOR" << endl;
    cout << "!1||1=" << !(1 || 1) << endl;
    cout << "!1||0=" << !(1 || 0) << endl;
    cout << "!0||1=" << !(0 || 1) << endl;
    cout << "!0||0=" << !(0 || 0) << endl;
    cout << endl;

    cout << "Logika XNOR" << endl;
    cout << "!(1^1)=" << !(1 ^ 1) << endl;
    cout << "!(1^0)=" << !(1 ^ 0) << endl;
    cout << "!(0^1)=" << !(0 ^ 1) << endl;
    cout << "!(0^0)=" << !(0 ^ 0) << endl;
    cout << endl;

    return 0;
}
