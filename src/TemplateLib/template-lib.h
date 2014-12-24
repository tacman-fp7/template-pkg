namespace TemplateLib {

/**
 * \class TemplateLib::aClass
 * \headerfile template-lib.h <TemplateLib/templatelib.h>
 *
 * \brief A class from TemplateLib namespace.
 *
 * This class that does something.
 */
class aClass
{
public:
    /**
     * Constructor
     */
    aClass();

    /**
     * Destructory
     */
    virtual ~aClass();

    /**
     * A method that does something
     */
    virtual bool doSomething();
};


/**
 * \class TemplateLib::anotherClass
 * \headerfile template-lib.h <TemplateLib/templatelib.h>
 *
 * \brief A derived class from TemplateLib namespace.
 *
 * Also this class that does something.
 */
class anotherClass : public aClass
{
public:
    /**
     * Constructor
     */
    anotherClass();

    /**
     * Destructory
     */
    virtual ~anotherClass();

    /**
     * A method that does something
     */
    virtual bool doSomething();
};


} // namespace TemplateLib
