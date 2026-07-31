#pragma once

#include <string>

class Notification {
public:
    virtual ~Notification() = default;
    virtual std::string send(const std::string& message) const = 0;
};
