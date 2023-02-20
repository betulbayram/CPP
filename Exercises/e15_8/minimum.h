#ifndef MINIMUM_H_
#define MINIMUM_H_

template<class T>

T minimum(T value1, T value2){

    T minimum = value1;

    if(value2 < value1){
        minimum = value2;
    }


    return minimum;
}


#endif