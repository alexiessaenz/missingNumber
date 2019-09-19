/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alexi
 *
 * Created on 18 de septiembre de 2019, 8:21 p.m.
 */

#include <iostream> 
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    int size; // definicion del tamanio
    cin >> size;
    vector<int> Array(size);
    for (int i=0;i<size;i++){  //llenado de vector
        cin >> Array[i];
        while(Array[i]<0 || Array[i]>109){
            cout<<"!!!"<<endl;
            cin >> Array[i];
        }
    }
    sort(Array.begin(),Array.end()); //ordenado de menor a mayor
    int current=2;
    for (int i=0;i<size;i++)
    {
        if (Array[i]>=current)
        {
            current+=2;
        }
    }
    cout << current << endl;
    
    }
    return 0;
}

