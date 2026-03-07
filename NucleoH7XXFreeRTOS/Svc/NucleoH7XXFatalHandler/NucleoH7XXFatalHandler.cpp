// ======================================================================
// \title  NucleoH7XXFatalHandler.cpp
// \brief  Fatal Handler specifically developed for the FeatherM4 placeholder,
//         but repurposed for the NucleoH7XX. Use fprime-util impl
// ======================================================================

#include <Fw/Logger/Logger.hpp>
#include "NucleoH7XXFreeRTOS/Svc/NucleoH7XXFatalHandler/NucleoH7XXFatalHandler.hpp"

namespace NucleoH7XX_FreeRTOS {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

NucleoH7XXFatalHandler :: NucleoH7XXFatalHandler(const char* const compName) : NucleoH7XXFatalHandlerComponentBase(compName) {}

NucleoH7XXFatalHandler :: ~NucleoH7XXFatalHandler() {}

// ----------------------------------------------------------------------
// Handler implementations for typed input ports
// ----------------------------------------------------------------------

void NucleoH7XXFatalHandler ::FatalReceive_handler(FwIndexType portNum, FwEventIdType Id) {
    Fw::Logger::log("FATAL %" PRI_FwEventIdType " handled.\n", Id);
    while (true) {}  // Returning might be bad
}

}  // namespace NucleoH7XX_FreeRTOS 
