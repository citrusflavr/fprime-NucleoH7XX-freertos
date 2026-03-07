// ======================================================================
// \title  OsResources.hpp
// \author laboratory10, repurposed for the NucleoH7XX by citrusflavr
// \brief  hpp file for OsResources component implementation class
// ======================================================================

#ifndef NucleoH7XX_FreeRTOS_OsResources_HPP
#define NucleoH7XX_FreeRTOS_OsResources_HPP

#include "NucleoH7XXFreeRTOS/Svc/OsResources/OsResourcesComponentAc.hpp"

namespace NucleoH7XX_FreeRTOS {

class OsResources final : public OsResourcesComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct OsResources object
    OsResources(const char* const compName  //!< The component name
    );

    //! Destroy OsResources object
    ~OsResources();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for user-defined typed input ports
    // ----------------------------------------------------------------------

    //! Handler implementation for run
    //!
    void Run_handler(const FwIndexType portNum, /*!< The port number*/
                     U32 context                /*!< The call order*/
    );
};

}  // namespace NucleoH7XX_FreeRTOS

#endif
