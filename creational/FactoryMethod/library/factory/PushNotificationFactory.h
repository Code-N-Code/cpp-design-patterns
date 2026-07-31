#pragma once

#include "NotificationFactory.h"
#include "../notification/PushNotification.h"

class PushNotificationFactory final : public NotificationFactory {
public:
    std::unique_ptr<Notification> createNotification() const override {
        return std::make_unique<PushNotification>();
    }
};
