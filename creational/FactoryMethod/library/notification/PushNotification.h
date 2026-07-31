#pragma once

#include "Notification.h"

class PushNotification final : public Notification {
public:
    std::string send(const std::string& message) const override {
        return "Push notification sent: " + message;
    }
};
