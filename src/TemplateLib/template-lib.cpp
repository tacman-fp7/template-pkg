#include "template-lib.h"

TemplateLib::aClass::aClass()
{
}

TemplateLib::aClass::~aClass()
{
}

bool TemplateLib::aClass::doSomething()
{
    return true;
}

TemplateLib::anotherClass::anotherClass() :
        aClass()
{
}

TemplateLib::anotherClass::~anotherClass()
{
}

bool TemplateLib::anotherClass::doSomething()
{
    return false;
}
