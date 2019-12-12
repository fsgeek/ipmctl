/*
 * Copyright (c) 2018, Intel Corporation.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _SHOWSENSORCOMMAND_H_
#define _SHOWSENSORCOMMAND_H_

#include <Uefi.h>
#include "CommandParser.h"
#include <NvmHealth.h>

/**
  Register the show sensor command

  @retval EFI_SUCCESS success
  @retval EFI_ABORTED registering failure
  @retval EFI_OUT_OF_RESOURCES memory allocation failure
**/
EFI_STATUS
RegisterShowSensorCommand(
  );

/**
  Execute the show sensor command

  @param[in] pCmd command from CLI

  @retval EFI_SUCCESS success
  @retval EFI_INVALID_PARAMETER pCmd is NULL or invalid command line parameters
  @retval EFI_NOT_READY Invalid device state to perform action
**/
EFI_STATUS
ShowSensor(
  IN     struct Command *pCmd
  );

#endif /** _SHOWSENSORCOMMAND_H_ **/
