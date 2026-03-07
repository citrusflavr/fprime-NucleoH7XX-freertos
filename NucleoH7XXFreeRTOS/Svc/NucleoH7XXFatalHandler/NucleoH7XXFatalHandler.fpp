module NucleoH7XX_FreeRTOS {
    @ FatalHandler specific for fprime-NUCLEOH7XX-freertos
    passive component NucleoH7XXFatalHandler {

        @ FATAL event receive port
        sync input port FatalReceive: Svc.FatalEvent

    }
}
