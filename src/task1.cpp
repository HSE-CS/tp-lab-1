//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max){
    unsigned int my_num = max;
    bool notFound = false;
    
    while (true){
        for (int delimetr = min; delimetr <= max; delimetr++){
            if (delimetr == 0)
                continue;
            if (my_num % delimetr != 0){
                notFound = true;
                break;
            }
        }
        
        if (notFound){
            my_num += max;
            notFound = false;
        } else
            return my_num;
    }
}
