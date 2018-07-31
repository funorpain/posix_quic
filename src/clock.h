#pragma once

#include "net/quic/quartc/quartc_clock_interface.h"

namespace posix_quic {

class QuicClockImpl : public net::QuartcClockInterface {
    int64_t NowMicroseconds() override;

    QuicTime Now();
};

} // namespace posix_quic