set(template_lib_SRCS
    template-lib.cpp
)

set(template_lib_HDRS
    template-lib.h
)

add_library(template-lib SHARED ${template_lib_SRCS} ${template_lib_HDRS})

set_target_properties(template-lib PROPERTIES VERSION ${${VARS_PREFIX}_VERSION}
                                              SOVERSION ${${VARS_PREFIX}_VERSION}
                                              PUBLIC_HEADER "${template_lib_HDRS}")

target_include_directories(template-lib PUBLIC "$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>"
                                               "$<INSTALL_INTERFACE:${${VARS_PREFIX}_INSTALL_INCLUDEDIR}>")

install(TARGETS template-lib
        EXPORT TemplatePkg
        RUNTIME DESTINATION "${${VARS_PREFIX}_INSTALL_BINDIR}" COMPONENT bin
        LIBRARY DESTINATION "${${VARS_PREFIX}_INSTALL_LIBDIR}" COMPONENT shlib
        PUBLIC_HEADER DESTINATION "${${VARS_PREFIX}_INSTALL_INCLUDEDIR}/TemplateLib" COMPONENT dev)

set_property(GLOBAL APPEND PROPERTY ${VARS_PREFIX}_TARGETS template-lib)
