#include <iostream>
#include <h_list.h>
#include <QDebug>
#include <fstream>
using namespace std;

int main() {
    string s[] = {"Fiction","Chick lit","Fiction","Politics","n"};
    string s_2[] = {"Travel books","Fantasy","Fiction","n"};
    h_list <string> test_1(s);
    assert(test_1.sz() == 5);

    h_list <string> test_2(s_2);
    test_1.remove_element("Fiction");
    bool res = test_1["Fiction"];
    assert(res == false);
    assert(test_1.sz() == 3);
    auto test_3 = test_1 && test_2;

    assert(test_3.sz() == 1);
    assert(!(test_1 == test_2));

    h_list <string> test_4("test.txt",1);
    test_4.in_file("test.txt");
}
