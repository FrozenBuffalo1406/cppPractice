// first include library string
// define your binary string variable
// define int varibale to store converted int
// use function stoi()
#include <string>
int main(int argc, char const *argv[])
{
    std::string binaryString{"11010"};
    int convertedNumber{};
    convertedNumber = std::stoi(binaryString, 0, 2);

    return 0;
}
