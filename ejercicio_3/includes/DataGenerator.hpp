#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <type_traits>
using namespace std;

class DataGenerator{
private:
    vector<double> vec_doubles;
    vector<string> palabras;
    vector<vector<int>> listas;

public:
    template<typename T>
    void addData(const T& data){
        if constexpr(is_same_v<T, double>){
            vec_doubles.push_back(data);
        }
        else if constexpr(is_same_v<T, string>){
            palabras.push_back(data);
        }
        else if constexpr(is_same_v<T, vector<int>>){
            listas.push_back(data);
        }
        else{
            static_assert(!is_same_v<T, T>, "Tipo no aceptable");
        }
    }

    template<typename T>
    string getLabel(const T& data){
        if constexpr(is_same_v<T, double>){
            return "vec_doubles";
        }
        else if constexpr(is_same_v<T, string>){
            return "palabras";
        }
        else if constexpr(is_same_v<T, vector<int>>){
            return "listas";
        }
        else{
            static_assert(!is_same_v<T, T>, "Tipo no aceptable");
        }
    }

    //GETTERS
    const vector<double>& getVecDoubles();
    const vector<string>& getPalabras();
    const vector<vector<int>>& getListas();
};