#pragma once

#include <memory>

#include "../notification/Notification.h"

class NotificationFactory {
public:
    virtual ~NotificationFactory() = default;
    virtual std::unique_ptr<Notification> createNotification() const = 0;
};
