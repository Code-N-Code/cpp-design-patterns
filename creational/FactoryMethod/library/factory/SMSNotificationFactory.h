#pragma once

#include "NotificationFactory.h"
#include "../notification/SMSNotification.h"

class SMSNotificationFactory final : public NotificationFactory {
public:
    std::unique_ptr<Notification> createNotification() const override {
        return std::make_unique<SMSNotification>();
    }
};
