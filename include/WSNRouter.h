/***************************************************************************//**
  \file WSNRouter.h

  \brief Contains function prototypes related to router functionality.

  \author
    Atmel Corporation: http://www.atmel.com \n
    Support email: avr@atmel.com

  Copyright (c) 2008-2012, Atmel Corporation. All rights reserved.
  Licensed under Atmel's Limited License Agreement (BitCloudTM).

  \internal
  History:
    15/03/12 D. Kolmakov - Created

  Last change:
    $Id: WSNRouter.h 20608 2012-03-23 09:22:15Z arazinkov $
*******************************************************************************/
#ifndef _WSNROUTER_H
#define _WSNROUTER_H

/*****************************************************************************
                              Includes section
******************************************************************************/
#include <WSNDemoApp.h>

/*****************************************************************************
                              Prototypes section
******************************************************************************/
/**************************************************************************//**
  \brief Fills device interface structure with functions related to coordinator.

  \param[in, out] deviceInterface - pointer to device interface structure.

  \return None.
******************************************************************************/
void appRouterGetInterface(SpecialDeviceInterface_t *deviceInterface);

#endif // _WSNROUTER_H
