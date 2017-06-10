#ifndef SETFILTER_H_INCLUDED
#define SETFILTER_H_INCLUDED

#include <set>

template<class T>
class set_filtering{
    std::set<T>* filtered_set; // storing the set as a pointer
    std::set<T> erased_set;
    public:
        set_filtering(std::set<T> &s);
        void filter(T filter_out);
        void unfilter(T filter_out);
        void inverse();
};

template<class T>
set_filtering<T>::set_filtering(std::set<T> &s){
    filtered_set = &s; // saving the reference of the set
}

template<class T>
void set_filtering<T>::filter(T filter_out_val){
    typename std::set<T>::iterator it;
    it = filtered_set->find(filter_out_val); // method invocation through pointer
    if (it != filtered_set->end()) {
        erased_set.insert(filter_out_val);
        filtered_set->erase(it);
    }
    return;
}

template<class T>
void set_filtering<T>::unfilter(T unfilter_val){
    typename std::set<T>::iterator it;
    it = erased_set.find(unfilter_val);
    if (it != erased_set.end()) {
        filtered_set->insert(unfilter_val);
        erased_set.erase(it);
    }
    return;
}

template<class T>
void set_filtering<T>::inverse() {
    return;
}

#endif // SETFILTER_H_INCLUDED
