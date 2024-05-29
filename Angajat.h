#pragma once
#include <string>
#include "MyForm1.h"
using namespace System;

namespace Interfataclr {
    public ref class Autentificare
    {
    public:
        static System::Void AutentificareUtilizator(System::String^ numeUtilizator, System::String^ parolaIntrodusa);
    };
}

