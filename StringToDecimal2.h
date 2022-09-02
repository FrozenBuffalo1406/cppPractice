#include <iostream>
using namespace std;

main()

{
    std::string st = "010111000010010011000100010001110110011010110001010111010010010110100101011001010110010101101010";

    uint64_t number;
    number = strtoull(st.c_str(), NULL, 2);
    cout << number << " ";

    char ch = cin.get();
    cout << ch;

    return 0;
}