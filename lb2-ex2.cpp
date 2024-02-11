#include <iostream>
using namespace std;

void charCheck(char input_char)
{

    if ((input_char >= 65 && input_char <= 90)
        || (input_char >= 97 && input_char <= 122))
        cout << " Alphabet ";


    else if (input_char >= 48 && input_char <= 57)
        cout << " Digit ";


    else
        cout << " Special Character ";
}

int main()
{
    char input_char = '$';
    charCheck(input_char);
    return 0;
}
