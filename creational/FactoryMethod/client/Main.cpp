#include <iostream>
#include <memory>

#include "../library/factory/EmailNotificationFactory.h"
#include "../library/factory/NotificationFactory.h"

int main() {
    std::unique_ptr<NotificationFactory> factory =
        std::make_unique<EmailNotificationFactory>();
    auto notification = factory->createNotification();

    std::cout << notification->send("Welcome to the course") << '\n';
}
