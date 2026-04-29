#include <iostream>
#include <string>
using namespace std;

class Notification
{
public:
    virtual void send(string message) const = 0;
};

class EmailNotification : public Notification
{
public:
    void send(string message) const
    {
        cout << "Email: " << message << endl;
    }
};

class SMSNotification : public Notification
{
public:
    void send(string message) const
    {
        cout << "SMS: " << message << endl;
    }
};

class PushNotification : public Notification
{
public:
    void send(string message) const
    {
        cout << "Push: " << message << endl;
    }
};

class Notifier
{
public:
    virtual Notification* createNotification() = 0;

    void notifyUser(string message)
    {
        Notification* notification = createNotification();
        notification->send(message);
    }
};


class EmailNotifier : public Notifier
{
public:
    Notification* createNotification()
    {
        return new EmailNotification();
    }
};

class SMSNotifier : public Notifier
{
public:
    Notification* createNotification()
    {
        return new SMSNotification();
    }
};

class PushNotifier : public Notifier
{
public:
    Notification* createNotification()
    {
        return new PushNotification();
    }
};

int main()
{
    Notifier* notifier;

    notifier = new EmailNotifier();
    notifier->notifyUser("Ваш заказ обработан");
    delete notifier;

    notifier = new SMSNotifier();
    notifier->notifyUser("Ваш заказ обработан");
    delete notifier;

    notifier = new PushNotifier();
    notifier->notifyUser("Ваш заказ обработан");
    delete notifier;

}