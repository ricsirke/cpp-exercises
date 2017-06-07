#ifndef SETFILTER_H_INCLUDED
#define SETFILTER_H_INCLUDED

#include <set>

template<class T>
class set_filtering{
    std::set<T> filtered_set;
    std::set<T> complement_set;
    public:
        set_filtering(std::set<T> s);
        void filter(T filter_out);
};

template<class T>
set_filtering<T>::set_filtering(std::set<T> s){
    filtered_set = s;
}


template<class T>
void set_filtering<T>::filter(T filter_out){
    typename std::set<T>::iterator it;
    
    return;
}

#endif // SETFILTER_H_INCLUDED
