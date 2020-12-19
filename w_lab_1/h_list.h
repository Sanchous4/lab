#ifndef H_LIST_H
#define H_LIST_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <class t>
class h_list {
private:
    t fstr[20];
    struct h_lst{
        t val;
        int key;
        h_lst *front, *back;
    };
    h_lst *ptr_front = NULL,*ptr_back = NULL,*ptr_curr = NULL;
    int size = 0;

public:
    h_lst *ptr_end = NULL,*ptr_bgn = NULL;
    h_list() = default;
    h_list(t* def_array);
    h_list(string fname,int n);
    h_list(const h_list &obj);
    void out_file(string fname);
    void in_file(string fname);
    void clear();
    void remove_element(t element);
    int sz();
    int hash_key(t val, int sz);
    void create(t* def_array,bool flag);
    int sizeoff(t* array,bool flag);
    const h_list operator && (const h_list &obj_1);
    void operator << (t val);
    bool operator [] (t val);
    bool operator == (const h_list &obj_1);
    ~h_list();
};

// arguments and returns ARE NOT ptrs
//
// down file(path)
// upload file(path)

#endif // H_LIST_H
