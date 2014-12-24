cmake_minimum_required(VERSION 2.8.11)

### Steps for customization
# 1. Change TemplatePkg with the name of your library/package
# 2. Change TEMPLATE_PKG according to the name of your library/package
# 3. Change version information
# 4. Add your libraries in src, i.e. see src/TemplateLib
# 5. Update src/CMakeLists.txt

project(TemplatePkg CXX)

set(VARS_PREFIX "TEMPLATE_PKG")

# Provide version information
set(${VARS_PREFIX}_MAJOR_VERSION 0)
set(${VARS_PREFIX}_MINOR_VERSION 0)
set(${VARS_PREFIX}_PATCH_VERSION 1)
set(${VARS_PREFIX}_VERSION ${${VARS_PREFIX}_MAJOR_VERSION}.${${VARS_PREFIX}_MINOR_VERSION}.${${VARS_PREFIX}_PATCH_VERSION})

find_package(YCM REQUIRED)
include(YCMDefaultDirs)
ycm_default_dirs(${VARS_PREFIX})

add_subdirectory(src)

include(InstallBasicPackageFiles)
install_basic_package_files(TemplatePkg VARS_PREFIX ${VARS_PREFIX}
                                        VERSION ${${VARS_PREFIX}_VERSION}
                                        COMPATIBILITY SameMajorVersion
                                        TARGETS_PROPERTY ${VARS_PREFIX}_TARGETS
                                        NO_CHECK_REQUIRED_COMPONENTS_MACRO)

include(AddUninstallTarget)
