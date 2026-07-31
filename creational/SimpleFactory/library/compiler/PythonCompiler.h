#pragma once

#include "Compiler.h"

class PythonCompiler final : public Compiler {
public:
    std::string compile() const override { return "Preparing Python source"; }
};
