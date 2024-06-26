#include "options.hpp"

#include <interface/interface.hpp>
#include <receiver/nmea/message.hpp>
#include <receiver/nmea/receiver.hpp>
#include <unistd.h>

using namespace receiver::nmea;

static void receiver_loop(NmeaReceiver& receiver) {
    receiver.interface().print_info();

    printf("[nmea]\n");
    printf("-----------------------------------------------------\n");
    printf("in the receiver_loop\n");

    for (;;) {
        // Wait for the next nmea message.
        printf("In the waiting message loop\n");
        auto message = receiver.wait_for_message();
        printf("After message recevied\n");
        if (message) {
            message->print();
        } else {
            break;
        }

        usleep(10 * 1000);
    }
}

int main(int argc, char** argv) {
    auto receiver = parse_configuration(argc, argv);
    printf("After parse_config in main\n");
    receiver_loop(*receiver.get());
    return 0;
}
