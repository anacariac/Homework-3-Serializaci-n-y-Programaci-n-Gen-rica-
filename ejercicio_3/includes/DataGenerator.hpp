#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <type_traits>
using namespace std;

template<typename T>
class DataGenerator{
private:
    vector<T> vec_data;

public:
    void addData(const T& data){
        vec_data.push_back(data);
    }

    string toJSON(){
        if constexpr(is_same_v<T, double>){
            ostringstream oss;
            oss << " \"vec_doubles\": [";
            for (size_t i = 0; i < vec_data.size(); i++) {
                oss << vec_data[i];
                if (i < vec_data.size() - 1) oss << ", ";
            }
            oss << "]";
            return oss.str();
        }
        else if constexpr(is_same_v<T, string>){
            ostringstream oss;
            oss << "  \"palabras\": [";
            for (size_t i = 0; i < vec_data.size(); i++) {
                oss << "\"" << vec_data[i] << "\"";
                if (i < vec_data.size() - 1) oss << ", ";
            }
            oss << "]";
            return oss.str();
        }
        else if constexpr(is_same_v<T, vector<int>>){
            ostringstream oss;
            oss << "  \"listas\": [";
            for (size_t i = 0; i < vec_data.size(); i++) {
                oss << "\n\t [";
                for (size_t j = 0; j < vec_data[i].size(); j++) {
                    oss << vec_data[i][j];
                    if (j < vec_data[i].size() - 1) oss << ", ";
                }
                oss << "]";
                if (i < vec_data.size() - 1) oss << ", ";
            }
            oss << "\n\t]";
            return oss.str();
        }
        else {
            static_assert(!is_same_v<T, T>, "Tipo no soportado");
            return "";
        }
    }

};