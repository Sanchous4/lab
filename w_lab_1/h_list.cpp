#include "h_list.h"
#include <iostream>
#include <fstream>

using namespace std;

template<class t>
h_list<t>::h_list(t* def_array) {
    create(def_array,false);
}

template<class t>
h_list<t>::h_list(string fname,int n){
    out_file(fname);
    create(fstr,false);
}

template<class t>
h_list<t>::h_list(const h_list &obj){
    size = obj.size;
    int i = 0;

    h_lst *ptr_in = obj.ptr_bgn;

    while(i < size) {
        i++;

        ptr_curr = new h_lst;
        ptr_curr->val = ptr_in->val;

        ptr_in = ptr_in->front;

        if(!ptr_front){
            ptr_front = ptr_curr;
            ptr_curr->back = NULL;
        } else {
            ptr_back->front = ptr_curr;
            ptr_curr->back = ptr_back;
        }
        ptr_back = ptr_curr;
    }
    if (ptr_curr) ptr_curr->front=NULL;

    ptr_end = ptr_curr;
    ptr_bgn = ptr_front;
}

template<class t>
void h_list<t>::out_file(string fname){
    ifstream f(fname);
    if (!f){
        //...
        return;
    }else{
        int i = 0;
        for(i = 0; !f.eof();i++) f >> fstr[i];
        f.close();
    }
}

template<class t>
void h_list<t>::in_file(string fname){
    ofstream f(fname);
    if (!f){
        //...
    }else{
        h_lst *ptr_in = ptr_bgn;
        string str_ = "";
        while(ptr_in){
            str_ = ptr_in->val;
            if (str_ != "n")
            f << str_ << " ";
            ptr_in = ptr_in->front;
        }
        f.close();
    }
}

template<class t>
void h_list<t>::clear() {
    h_lst *ptr_in = ptr_bgn;
    while(ptr_in){
        ptr_in = ptr_bgn->front;
        ptr_bgn = NULL;
        ptr_bgn = ptr_in;
    }
    ptr_bgn = NULL;
    ptr_end = NULL;

    ptr_front = NULL;
    ptr_back = NULL;
    ptr_curr = NULL;
}

template<class t>
void h_list<t>::remove_element(t element){
    bool result = false;
    h_lst *ptr_in = ptr_bgn;
    t *array = new t[size];
    int i = 0, counter = 0;

    while(ptr_in && size != 0){
        if(ptr_in->val == element){
            result = true,counter+=1;
        }
        array[i] = ptr_in->val,i+=1;
        ptr_in = ptr_in->front;
    }

    size = size - counter;
    t *array_chng = new t[size];
    i=0;

    if (result){
        for (int j = 0;j < (size+counter);j++){
            if (array[j] != element) array_chng[i] = array[j],i+=1;
        }
    } else{

    }

    if(size != 0 && result){
        clear();
        create(array_chng,true);
    } else if (size == 0) {
        clear();
    }

    delete[] array;
}

template<class t>
int h_list<t>::sz() {
    return size;
}

template<class t>
int h_list<t>::hash_key(t val, int sz) {
    int val_1 = sizeof(val);
    string str = "000";
    str = val;
    val_1 = str.size();
    val_1 = int(val_1/sz);
    return val_1;
}

template<class t>
void h_list<t>::create(t* def_array,bool flag) {
    int j = sizeoff(def_array,flag)-1;
    int i = 0;
    size = 0;
    while(i < j) {

        ptr_curr = new h_lst;
        ptr_curr->val = def_array[i];
        ptr_curr->key = hash_key(def_array[i],j);
        size++;

        if(!ptr_front){
            ptr_front = ptr_curr;
            ptr_curr->back = NULL;
        } else {
            ptr_back->front = ptr_curr;
            ptr_curr->back = ptr_back;
        }
        ptr_back = ptr_curr;
        i+=1;
    }
    if (ptr_curr) ptr_curr->front=NULL;

    ptr_end = ptr_curr;
    ptr_bgn = ptr_front;

}

template<class t>
int h_list<t>::sizeoff(t *array,bool flag){
    int len = 0;
    if (!flag){
    string str = "000";
    while (str != "n"){
        len+=1;
        str = *array++;
    }

    return len+1;
    } else {
        return size+1;
    }
}

template<class t>
const h_list<t> h_list<t>::operator &&(const h_list &obj_1){
    h_lst *ptr_in = ptr_bgn;
    t array[20];
    int i = 0;

    while(ptr_in && size != 0){
        h_lst *ptr_in_1 = obj_1.ptr_bgn;
        while(ptr_in_1 && obj_1.size != 0){
            if (ptr_in->val == ptr_in_1->val){
                array[i] = ptr_in->val,i+=1;
            }
            ptr_in_1 = ptr_in_1->front;
        }
        ptr_in = ptr_in->front;
    }
    if(i == 0){
        h_list obj;
        return obj;
    }
    else {
        h_list obj(array);
        return obj;
    }
}

template<class t>
void h_list<t>::operator <<(t val){
    ptr_curr = new h_lst;
    ptr_curr->val = val;
    size++;

    if(!ptr_front){
        ptr_front = ptr_curr;
        ptr_curr->back = NULL;
    } else {
        ptr_back->front = ptr_curr;
        ptr_curr->back = ptr_back;
    }
    ptr_back = ptr_curr;

    if (ptr_curr) ptr_curr->front=NULL;

    ptr_end = ptr_curr;
    ptr_bgn = ptr_front;
}

template<class t>
bool h_list<t>::operator [](t val){
    bool result = false;
    h_lst *ptr_in = ptr_bgn;

    while(ptr_in && size != 0){
        if(ptr_in->val == val){
            result = true;
        }
        ptr_in = ptr_in->front;
    }
    return result;
}

template<class t>
bool h_list<t>::operator ==(const h_list &obj_1)
{
    bool result = true;
    if (size != obj_1.size) result = false;
    else {
        h_lst *ptr_in = ptr_bgn;
        h_lst *ptr_in_1 = obj_1.ptr_bgn;

        while(ptr_in && ptr_in_1){
            if(ptr_in->val != ptr_in_1->val){
                result = false;
            }
            ptr_in = ptr_in->front;
            ptr_in_1 = ptr_in_1->front;
        }

        if (ptr_in != ptr_in_1) result = false;
    }

    return result;
}

template<class t>
h_list<t>::~h_list(){
    clear();
}

template class h_list<int>;
template class h_list<float>;
template class h_list<char>;
template class h_list<string>;
