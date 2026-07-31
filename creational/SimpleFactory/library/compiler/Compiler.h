#pragma once

#include <string>

class Compiler {
public:
    virtual ~Compiler() = default;
    virtual std::string compile() const = 0;
};
