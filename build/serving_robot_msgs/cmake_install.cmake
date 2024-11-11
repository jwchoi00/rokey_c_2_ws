<<<<<<< HEAD
# Install script for directory: /home/g1/rokey_c_2_ws/src/serving_robot_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/g1/rokey_c_2_ws/install/serving_robot_msgs")
=======
# Install script for directory: /home/aaa/rokey_c_2_ws/src/serving_robot_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/aaa/rokey_c_2_ws/install/serving_robot_msgs")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
<<<<<<< HEAD
  include("/home/g1/rokey_c_2_ws/build/serving_robot_msgs/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
=======
  include("/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_generator_c.so")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_generator_c.so")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so"
<<<<<<< HEAD
         OLD_RPATH "/home/g1/rokey_c_2_ws/build/serving_robot_msgs:/opt/ros/humble/lib:"
=======
         OLD_RPATH "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs:/opt/ros/humble/lib:"
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_introspection_c.so")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_introspection_c.so")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_c.so"
<<<<<<< HEAD
         OLD_RPATH "/home/g1/rokey_c_2_ws/build/serving_robot_msgs:/opt/ros/humble/lib:"
=======
         OLD_RPATH "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs:/opt/ros/humble/lib:"
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_c.so")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_c.so")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_c.so"
<<<<<<< HEAD
         OLD_RPATH "/home/g1/rokey_c_2_ws/build/serving_robot_msgs:/opt/ros/humble/lib:"
=======
         OLD_RPATH "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs:/opt/ros/humble/lib:"
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_cpp.so")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/libserving_robot_msgs__rosidl_typesupport_cpp.so")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
<<<<<<< HEAD
        "/home/g1/rokey_c_2_ws/install/serving_robot_msgs/local/lib/python3.10/dist-packages/serving_robot_msgs"
=======
        "/home/aaa/rokey_c_2_ws/install/serving_robot_msgs/local/lib/python3.10/dist-packages/serving_robot_msgs"
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_py.so"
         RPATH "")
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/rosidl_generator_py/serving_robot_msgs/libserving_robot_msgs__rosidl_generator_py.so")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/rosidl_generator_py/serving_robot_msgs/libserving_robot_msgs__rosidl_generator_py.so")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_py.so"
<<<<<<< HEAD
         OLD_RPATH "/home/g1/rokey_c_2_ws/build/serving_robot_msgs:/opt/ros/humble/lib:"
=======
         OLD_RPATH "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs:/opt/ros/humble/lib:"
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libserving_robot_msgs__rosidl_generator_py.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport-noconfig.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cExport-noconfig.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cppExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cppExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cppExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cppExport.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_cppExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport-noconfig.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cExport-noconfig.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport-noconfig.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cExport-noconfig.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport-noconfig.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/serving_robot_msgs__rosidl_typesupport_cppExport-noconfig.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport.cmake"
<<<<<<< HEAD
         "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport.cmake")
=======
         "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport-noconfig.cmake")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/serving_robot_msgs/cmake" TYPE FILE FILES "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/CMakeFiles/Export/share/serving_robot_msgs/cmake/export_serving_robot_msgs__rosidl_generator_pyExport-noconfig.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<< HEAD
  include("/home/g1/rokey_c_2_ws/build/serving_robot_msgs/serving_robot_msgs__py/cmake_install.cmake")
=======
  include("/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/serving_robot_msgs__py/cmake_install.cmake")
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "/home/g1/rokey_c_2_ws/build/serving_robot_msgs/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "/home/aaa/rokey_c_2_ws/build/serving_robot_msgs/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 73d8adfddb3cb7c4b8f369d8192a45e57d8effdd
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
