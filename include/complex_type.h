#ifndef COMPLEX_TYPE_H
#define COMPLEX_TYPE_H

#include <string>
//09876543
struct DataStruct {
    int identifier;
    std::string title;
    double numerical_value;
    //=-098765432
    DataStruct(int id = 0, const std::string& t = "", double val = 0.0) 
        : identifier(id), title(t), numerical_value(val) {}
    //-0987698754                                                                                                                                                                                                                             
    bool operator==(const DataStruct& other) const {
        return identifier == other.identifier && title == other.title && numerical_value == other.numerical_value;
    }
};


#endif

