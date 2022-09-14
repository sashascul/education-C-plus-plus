#include <iostream>
#include <limits.h> // #include <climits>


int main () {

    /*

    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!";

    cin.get (); // окно остаётся открытым, пока не нажата клавиша

    */

    /*

    using std :: cin; // разрешение на использование cin из пространства std;
    using std :: cout; // разрешение на использование cout из пространства std;

    int a;
    cin >> a;
    cout << a;

    */

    /*

    int a;
    std :: cin >> a;  // использование cin из пространства более ущербным способом)))
    std :: cout << a; // также и с cout;

    */

    /*

    using namespace std;
    int n_int = INT_MAX; // присваивание максимального значения типа int;
    short n_short = SHRT_MAX; // присваивание максимального значения типа short;

    //аналогично и для остальных типов

    cout << "max int is: " << n_int << endl;
    cout << "max short is: " << n_short << endl;
    cout << "sizeof int is: " << sizeof (int) << endl;
    cout << "sizeof short is: " << sizeof (short) << endl;

    // sizeof () - узнать вес типа в моей системе;

    */

    /*

    int value (432); // инициализация переменной value значением = 432;
    std:: cout << value << std:: endl;
    value = {228}; // теперь value = 228;
    std:: cout << value << std:: endl;
    int value1 {7}; // value1 = 7;
    std:: cout << value1 << std:: endl;
    int value2 = {}; // value2 = 0;
    std:: cout << value2 << std:: endl;
    int value3 {}; // value3 = 0;
    std:: cout << value3 << std:: endl;

    */

    /*

    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // манипулятор для изменения основания системы счисления;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;  // манипулятор для изменения основания системы счисления;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    cout << endl << endl;
    cout << dec << "waist = " << waist << endl << "inseam = " << inseam << endl;

    // hex - 16-чная система счисления;
    // oct - 8-чная система счисления;
    // dec - 10-чная система счисления;
    // если будет введено, например,  cout << hex; то все последующие числа
    // будут выводиться в 16-чной системе счисления;

    */

    /*

    char ch;
    std:: cin >> ch;
    std:: cout << "symbol: " << ch << std:: endl;
    std:: cout << "cout.put () symbol: ";
    std:: cout.put (ch);

    */

    /*

    using namespace std;
    cout << "\aOperation \"Hyperhype\" is now activated!\n";
    cout << "Enter your agent code:__________\b\b\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with plan z3!\n";

    */

    /*

    int k\u00F6rper = 23; // равносильно: int korper = 23;
                          // \u00F6 - код символа 'o';

    std:: cout << "k\u00F6rper: "  << k\u00F6rper << std:: endl;

    */

    /*

    wchar_t bob = L'P'; // wchar_t - тип для самого большого набора символов в системе;
                        // 2-хбайтный целочисленный тип;

    std:: wcout << bob << std:: endl;
    std:: cout << sizeof (wchar_t) << std:: endl;

    */

    /*

    using namespace std;
    char16_t ch16 = u'q';
    char32_t ch32 = U'/U0000222B';
    cout << "16: " << ch16 << endl;

    */

    /*

    bool start = -228; // start = true;
    bool end = 0;      // end = false;

    */



    

    return 0;

}
