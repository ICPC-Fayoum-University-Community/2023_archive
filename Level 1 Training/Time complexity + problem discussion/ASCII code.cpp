// ascii code

#include<iostream>
using namespace std;

int main() {

    char numbers[] = { '0','1','2' ,'3' ,'4' ,'5' ,'6' ,'7' ,'8' ,'9' };

    for (int i = 48; i < 58; i++)
        cout << (char)i << " ";
    cout << "\n";

    for (int i = 0; i < 10; i++)
        cout << (int)numbers[i] << " ";
    cout << "\n";

    for (int i = 0; i < 10; i++)
        cout << (char)(i + 48) << " ";
    cout << "\n\n";


    for (int i = 97; i < 123; i++)
        cout << (char)i << " "; cout << " -----> lowercase";
    cout << "\n";


    for (int i = 65; i < 91; i++)
        cout << (char)i << " "; cout << " -----> uppercase";
    cout << "\n\n";


    for (int i = 97; i < 123; i++)
        cout << (char)(i - 32) << " "; cout << " -----> lowercase to uppercase";
    cout << "\n";


    for (int i = 65; i < 91; i++)
        cout << (char)(i + 32) << " "; cout << " -----> uppercase to lowercase";

    cout << "\n" << (char)('a' + 1);


    return 0;
}