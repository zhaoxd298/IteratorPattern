#include "Iterator.h"
#include "Breakfast.h"
#include "Diner.h"
#include "Waitress.h"

using namespace Iterator;

int main()
{
    Breakfast *b = new Breakfast();
    Diner *d = new Diner();

    Waitress* waitress = new Waitress(b, d);

    waitress->printMenu();

    delete b;
    delete d;

    return 0;
}

