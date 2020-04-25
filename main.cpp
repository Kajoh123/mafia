#include "class.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Tinstrument instr;

    Tskrzypce skrzyp;
    Tgitara gitar;

    Tinstrument *tab[3] = {&skrzyp, &instr, &gitar};
    for(int i = 0; i < 3; i++)
    {
        tab[i]->ring();
    } 

    return 0;
}