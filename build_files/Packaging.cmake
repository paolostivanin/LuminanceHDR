MESSAGE(STATUS "Installation of ${LHDR_NAME} ${LHDR_VERSION} in ${CMAKE_INSTALL_PREFIX}")

# Shared CPack Variables
set(CPACK_PACKAGE_NAME          "${LHDR_NAME}")
set(CPACK_PACKAGE_DESCRIPTION   "${LHDR_NAME} ${LHDR_VERSION}")
set(CPACK_PACKAGE_VERSION_MAJOR "${LHDR_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${LHDR_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${LHDR_VERSION_PATCH}")
set(CPACK_PACKAGE_VERSION       "${LHDR_VERSION}")
set(CPACK_PACKAGE_VENDOR        "${LHDR_VENDOR}")

set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/LICENSE")
set(CPACK_RESOURCE_FILE_README  "${CMAKE_SOURCE_DIR}/README.md")
set(CPACK_RESOURCE_FILE_WELCOME "${CMAKE_SOURCE_DIR}/README.md")

# That's all Folks!
##
