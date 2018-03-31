#pragma once

#include "JSC/JSCHelpers.h"

class Document :  public JSC::Binding<Document>
{
public:

    static JSC::Class &GetClassRef();

private:

    static JSC_INITIALIZER(Initializer);
    static JSC_FINALIZER(Finalizer);

    static JSC_FUNCTION(createElement);
};
