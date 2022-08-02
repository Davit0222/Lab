#include <iostream>
#include <vector>
std::vector<unsigned int> table {0};
bool bitset_str(int index);
void set(int index);
int main() {
    set(85);
    std::cout << std::boolalpha << bitset_str(85);
    return 0;
}
bool bitset_str(int index) {
    int index1 = index / 32;
    int pos = index % 32;
    return table[index1] & (1 << pos);
}
void set(int index) {
    int index1 = index / 32;
    int pos = index % 32;
   table[index1] |= (1 << pos);
}
