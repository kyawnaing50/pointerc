#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    // normal
    int age = 30;
    int *agePointer;
    agePointer = &age;
    cout << "Normal: " << *agePointer << endl;

    // float
    float floatValue = 50.9f;
    float *floatPointer;
    floatPointer = &floatValue;
    cout << "Float: " << *floatPointer << endl;

    // character
    char character = 'A';
    char *charPointer;
    charPointer = &character;
    cout << "Character :" << *charPointer << endl;

    // array
    int arrayPt[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *arrayPointer;
    arrayPointer = arrayPt;
    cout << *(arrayPointer + 2) << endl;
    cout << "arrayPt's Address: " << arrayPt << endl;
    cout << "Array's Address: " << arrayPointer << endl;
    //(1)=> &arrayPointer[3] ရဲ့တန်ဖိုးက 3 ရဲ့ Address ရလာမည်။ (value 4ရဲ့ address ရလာမှာ )
    //(2)=> ရလာတဲ့ Address ကို 3 ပေါင်းမည်။() 7 ရဲ့ addressရလာမှာ။ )
    //(3)=> ရလာတဲ့ Address  ကို dereference လုပ်မည်။ (7 ရဲ့ Addressကို * လုပ်တော့ value 7 ရလာမည်။ )
    //(4)=> 7 ကို 3 နုတ်တော့ 4 ရတယ်။
    //(5)=> 4 ရဲ့ address ကို ပြန်ယူတယ်။
    //(6)=> အဲ့ဒီAddress ကို reference ပြန်လုပ်တော့ 4 ပဲရတယ်။ နောက်ဆုံးအဖြေဟာ 4ပဲ ရလာမှာ။
    cout << "Complex Array pointer: " << *(&*(&arrayPointer[3] + 3) - 3) << endl;
    return 0;
}
