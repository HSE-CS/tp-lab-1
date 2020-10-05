#include "task4.h"

int main(){
    // cout << sum("15", "20");
    cout << isNum("1") << isNum("123")<<
    isNum("0o")<<isNum("0q0") << endl << endl;

    cout << sum("15", "20") << endl;
    cout << sum("10", "1") << endl;
    cout << sum("123", "") << endl;
    cout << sum("1844674407370955161500", "184467440737");
    return 0;
}