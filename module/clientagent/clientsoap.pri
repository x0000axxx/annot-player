# clientsoap.pri
# Since 10/6/2011

## TODO: Automatic generate this pri file!!

CLIENT_SOAP_BINDING = ClientAgentServiceSoapBinding
CLIENT_SOAP_PREFIX = ClientSoap

CLIENT_SOAP_HOME=$$PWD/clientsoap

INCLUDEPATH += $$PWD
INCLUDEPATH += $$SOAP_PREFIX

HEADERS += \
    $$CLIENT_SOAP_HOME/$${CLIENT_SOAP_PREFIX}$${CLIENT_SOAP_BINDING}Object.h \
    $$CLIENT_SOAP_HOME/$${CLIENT_SOAP_PREFIX}H.h \
    $$CLIENT_SOAP_HOME/$${CLIENT_SOAP_PREFIX}Stub.h

#SOURCES +=
    #$$CLIENT_SOAP_HOME/$${CLIENT_SOAP_PREFIX}C.cpp
    #$$CLIENT_SOAP_HOME/$${CLIENT_SOAP_PREFIX}Server.cpp
    #$$CLIENT_SOAP_HOME/$${CLIENT_SOAP_PREFIX}ServerLib.cpp

OTHER_FILES += \
    $$PWD/clientsoap.gen.cmd

# EOF