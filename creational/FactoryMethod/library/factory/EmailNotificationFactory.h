#pragma once

#include "NotificationFactory.h"
#include "../notification/EmailNotification.h"

class EmailNotificationFactory final : public NotificationFactory {
public:
    std::unique_ptr<Notification> createNotification() const override {
        return std::make_unique<EmailNotification>();
    }
};
