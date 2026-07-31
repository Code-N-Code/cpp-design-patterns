#pragma once

#include "Notification.h"

class EmailNotification final : public Notification {
public:
    std::string send(const std::string& message) const override {
        return "Email sent: " + message;
    }
};
