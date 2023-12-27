//
// Created by Alex on 02.12.2023.
//


#include <iostream>
using namespace std;

int main() {
    //this program choses animal class by 3 given categories from the input;

    string group_1, group_2, group_3, result;

    //group_1 = "vertebrado";
    //group_2 = "ave";
    //group_3 = "carnivoro";

    //getline(cin, group_1);

    cin >> group_1 >> group_2 >> group_3 ;

    if (group_1 == "vertebrado") {
        if (group_2 == "ave"){
            result = (group_3 == "carnivoro") ? "aguia\n" : "pomba\n";
        }
        else {
            result = (group_3 == "onivoro") ? "homem\n" : "vaca\n";
        }
    }
    else{
        if (group_2 == "inseto"){
            result = (group_3 == "hematofago") ? "pulga\n" : "lagarta\n";
        }
        else {
            result = (group_3 == "hematofago") ? "sanguessuga\n" : "minhoca\n";
        }
    }
    cout << result;

    return 0;
}
