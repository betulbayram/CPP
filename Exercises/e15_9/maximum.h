#ifndef MAXIMUM_H_
#define MAXIMUM_H_

template<class T>

T maximum(T value1, T value2){

    T maximum = value1;

    if(value2 > value1){
        maximum = value2;
    }

    return maximum;
}

#endif