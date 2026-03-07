// ======================================================================
// \title  NucleoH7XXFatalHandler.hpp
// \brief  Fatal Handler specifically developed for the FeatherM4 placeholder,
//         but repurposed for the NucleoH7XX. Use fprime-util impl
// ======================================================================

#ifndef NucleoH7XX_FreeRTOS_FatalHandler_HPP
#define NucleoH7XX_FreeRTOS_FatalHandler_HPP

#include "NucleoH7XXFreeRTOS/Svc/NucleoH7XXFatalHandler/NucleoH7XXFatalHandlerComponentAc.hpp"

namespace NucleoH7XX_FreeRTOS {

class NucleoH7XXFatalHandler final : public NucleoH7XXFatalHandlerComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct NucleoH7XXFatalHandler object
    NucleoH7XXFatalHandler(const char* const compName  //!< The component name
    );

    //! Destroy NucleoH7XXFatalHandler object
    ~NucleoH7XXFatalHandler();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for typed input ports
    // ----------------------------------------------------------------------

    //! Handler implementation for FatalReceive
    //!
    //! FATAL event receive port
    void FatalReceive_handler(FwIndexType portNum,  //!< The port number
                              FwEventIdType Id      //!< The ID of the FATAL event
                              ) override;
};

}  // namespace NucleoH7XX_FreeRTOS

#endif
