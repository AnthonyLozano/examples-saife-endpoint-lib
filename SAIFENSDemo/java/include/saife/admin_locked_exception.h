/*
 * Copyright (c) 2014 SAIFE, Inc.  All Rights Reserved.
 *
 * This software is proprietary to, and a valuable trade secret of, SAIFE, Inc.
 *
 * The software and documentation may not be copied, reproduced, translated,
 * or reduced to any electronic medium or machine-readable form without a
 * prior written agreement from SAIFE, Inc.
 *
 * UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING, THE SOFTWARE
 * AND DOCUMENTATION ARE DISTRIBUTED ON AN "AS IS" BASIS, WITHOUT WARRANTIES
 * OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT.  REFER TO THE WRITTEN AGREEMENT FOR SPECIFIC
 * LANGUAGE GOVERNING PERMISSIONS AND LIMITATIONS.
 */
#ifndef INCLUDE_SAIFE_ADMIN_LOCKED_EXCEPTION_H_
#define INCLUDE_SAIFE_ADMIN_LOCKED_EXCEPTION_H_

#include <string>

#include "saife/saife_library_exception.h"

namespace saife {

/**
 * This exception is thrown when the SAIFE Library cannot be unlocked without a password reset.
 */
class AdminLockedException : public SaifeLibraryException {
 public:

  /**
   * @param[in] error The error message for this exception
   */
  explicit AdminLockedException(const std::string& error) :
  SaifeLibraryException(error) {
  }
  virtual ~AdminLockedException() {}
};

} /* namespace saife */

#endif  // INCLUDE_SAIFE_ADMIN_LOCKED_EXCEPTION_H_