
#include <TMCStepper.h>

using namespace TMCStepper_n;
using namespace TMC_HAL;

int TMC_UART::available() {
    return 0;
}

uint32_t TMC_UART::getTime() const {
    return 0;
}

void TMC_UART::preWriteCommunication() {

}

void TMC_UART::preReadCommunication() {
}

size_t TMC_UART::serial_read(uint8_t *data, int8_t length) {
    return length;
}

size_t TMC_UART::serial_write(const uint8_t *data, int8_t length) {
    return length;
}

void TMC_UART::postWriteCommunication() {}

void TMC_UART::postReadCommunication() {
}



