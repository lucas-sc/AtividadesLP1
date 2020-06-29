#include "../include/App.h"
#include "../include/Diary.h"
#include "../include/Date.h"

#include <iostream>
#include <string>

    int main(int argc, char* argv[])
    {

        App aplicativo("diary.txt");
        return aplicativo.run(argc, argv);

        return 0;
    }