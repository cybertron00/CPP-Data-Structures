//
// Created by Arko Banerjee on 19/11/21.
//

#ifndef HELLOWORLD_ARRAYS_H
#define HELLOWORLD_ARRAYS_H

#endif //HELLOWORLD_ARRAYS_H
#include <map>

void Arrays_1();
void Arrays_2();

typedef void (*DSFunction)(void);
std::map<std::string, DSFunction> array_map{ {"Arrays_1", &Arrays_1},
                                             {"Arrays_2", &Arrays_2} };
