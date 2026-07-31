#pragma once

#include "Notification.h"

class SMSNotification final : public Notification {
public:
    std::string send(const std::string& message) const override {
        return "SMS sent: " + message;
    }
};
