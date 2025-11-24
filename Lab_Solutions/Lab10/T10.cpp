#include <iostream>
#include <cstring>
#include <cstdint>
using namespace std;
int main()
{
    uint32_t nums[4] = {
        1869440333,
        1109424498,
        1801678700,
        115};
    char msg[17];
    memcpy(msg, nums, 16); // copy raw bytes
    msg[16] = '\0';
    cout << "Decoded message: " << msg << endl;
    return 0;
}