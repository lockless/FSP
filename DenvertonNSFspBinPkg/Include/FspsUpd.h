/** @file

Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this
  list of conditions and the following disclaimer in the documentation and/or
  other materials provided with the distribution.
* Neither the name of Intel Corporation nor the names of its contributors may
  be used to endorse or promote products derived from this software without
  specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
  THE POSSIBILITY OF SUCH DAMAGE.

  This file is automatically generated. Please do NOT modify !!!

**/

#ifndef __FSPSUPD_H__
#define __FSPSUPD_H__

#include <FspUpd.h>

#pragma pack(1)


/** Fsp S Configuration
**/
typedef struct {

/** Offset 0x0020 - PCIe Controller 0 Bifurcation
  Configure PCI Express controller 0 bifurcation.
  0:X2X2X2X2, 1:X2X2X4, 2:X4X2X2, 3:X4X4, 4:X8
**/
  UINT8                       PcdBifurcationPcie0;

/** Offset 0x0021 - PCIe Controller 1 Bifurcation
  Configure PCI Express controller 1 bifurcation.
  0:X2X2X2X2, 1:X2X2X4, 2:X4X2X2, 3:X4X4, 4:X8
**/
  UINT8                       PcdBifurcationPcie1;

/** Offset 0x0022 - Active Core Count
  Select # of Active Cores (Default: 0, 0:ALL, 1..15 = 1..15 Cores)
  0:ALL, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:10, 11:11, 12:12, 13:13,
  14:14, 15:15
**/
  UINT8                       PcdActiveCoreCount;

/** Offset 0x0023
**/
  UINT32                      PcdCpuMicrocodePatchBase;

/** Offset 0x0027
**/
  UINT32                      PcdCpuMicrocodePatchSize;

/** Offset 0x002B - PCIe Controller 0
  Enable / Disable PCI Express controller 0
  $EN_DIS
**/
  UINT8                       PcdEnablePcie0;

/** Offset 0x002C - PCIe Controller 1
  Enable / Disable PCI Express controller 1
  $EN_DIS
**/
  UINT8                       PcdEnablePcie1;

/** Offset 0x002D - Embedded Multi-Media Controller (eMMC)
  Enable / Disable Embedded Multi-Media controller
  $EN_DIS
**/
  UINT8                       PcdEnableEmmc;

/** Offset 0x002E - LAN Controllers
  Enable / Disable LAN controllers, refer to FSP Integration Guide for details.
  0:Disable LAN 0 & LAN 1, 1:Enable LAN 0 & LAN 1, 2:Disable LAN 1 only
**/
  UINT8                       PcdEnableGbE;

/** Offset 0x002F
**/
  UINT32                      PcdFiaMuxConfigRequestPtr;

/** Offset 0x0033
**/
  UINT8                       UnusedUpdSpace0[4];

/** Offset 0x0037 - PCIe Root Port 0 DeEmphasis
  Desired DeEmphasis level for PCIE root port
  0:6dB, 1:3.5dB
**/
  UINT8                       PcdPcieRootPort0DeEmphasis;

/** Offset 0x0038 - PCIe Root Port 1 DeEmphasis
  Desired DeEmphasis level for PCIE root port
  0:6dB, 1:3.5dB
**/
  UINT8                       PcdPcieRootPort1DeEmphasis;

/** Offset 0x0039 - PCIe Root Port 2 DeEmphasis
  Desired DeEmphasis level for PCIE root port
  0:6dB, 1:3.5dB
**/
  UINT8                       PcdPcieRootPort2DeEmphasis;

/** Offset 0x003A - PCIe Root Port 3 DeEmphasis
  Desired DeEmphasis level for PCIE root port
  0:6dB, 1:3.5dB
**/
  UINT8                       PcdPcieRootPort3DeEmphasis;

/** Offset 0x003B - PCIe Root Port 4 DeEmphasis
  Desired DeEmphasis level for PCIE root port
  0:6dB, 1:3.5dB
**/
  UINT8                       PcdPcieRootPort4DeEmphasis;

/** Offset 0x003C - PCIe Root Port 5 DeEmphasis
  Desired DeEmphasis level for PCIE root port
  0:6dB, 1:3.5dB
**/
  UINT8                       PcdPcieRootPort5DeEmphasis;

/** Offset 0x003D - PCIe Root Port 6 DeEmphasis
  Desired DeEmphasis level for PCIE root port
  0:6dB, 1:3.5dB
**/
  UINT8                       PcdPcieRootPort6DeEmphasis;

/** Offset 0x003E - PCIe Root Port 7 DeEmphasis
  Desired DeEmphasis level for PCIE root port
  0:6dB, 1:3.5dB
**/
  UINT8                       PcdPcieRootPort7DeEmphasis;

/** Offset 0x003F
**/
  UINT8                       UnusedUpdSpace1;

/** Offset 0x0040
**/
  UINT32                      PcdEMMCDLLConfigPtr;

/** Offset 0x0044 - PCIe Root Port 0 Link Speed
  Upper limit on link operational speed for PCI Express RootPort
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort0LinkSpeed;

/** Offset 0x0045 - PCIe Root Port 1 Link Speed
  Upper limit on link operational speed for PCI Express RootPort
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort1LinkSpeed;

/** Offset 0x0046 - PCIe Root Port 2 Link Speed
  Upper limit on link operational speed for PCI Express RootPort
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort2LinkSpeed;

/** Offset 0x0047 - PCIe Root Port 3 Link Speed
  Upper limit on link operational speed for PCI Express RootPort
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort3LinkSpeed;

/** Offset 0x0048 - PCIe Root Port 4 Link Speed
  Upper limit on link operational speed for PCI Express RootPort
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort4LinkSpeed;

/** Offset 0x0049 - PCIe Root Port 5 Link Speed
  Upper limit on link operational speed for PCI Express RootPort
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort5LinkSpeed;

/** Offset 0x004A - PCIe Root Port 6 Link Speed
  Upper limit on link operational speed for PCI Express RootPort
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort6LinkSpeed;

/** Offset 0x004B - PCIe Root Port 7 Link Speed
  Upper limit on link operational speed for PCI Express RootPort
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort7LinkSpeed;

/** Offset 0x004C - PCIe Root Port 0 ASPM
  Enable PCI Express Active State Power Management settings
  0:Disabled, 2:L1
**/
  UINT8                       PcdPcieRootPort0Aspm;

/** Offset 0x004D - PCIe Root Port 1 ASPM
  Enable PCI Express Active State Power Management settings
  0:Disabled, 2:L1
**/
  UINT8                       PcdPcieRootPort1Aspm;

/** Offset 0x004E - PCIe Root Port 2 ASPM
  Enable PCI Express Active State Power Management settings
  0:Disabled, 2:L1
**/
  UINT8                       PcdPcieRootPort2Aspm;

/** Offset 0x004F - PCIe Root Port 3 ASPM
  Enable PCI Express Active State Power Management settings
  0:Disabled, 2:L1
**/
  UINT8                       PcdPcieRootPort3Aspm;

/** Offset 0x0050 - PCIe Root Port 4 ASPM
  Enable PCI Express Active State Power Management settings
  0:Disabled, 2:L1
**/
  UINT8                       PcdPcieRootPort4Aspm;

/** Offset 0x0051 - PCIe Root Port 5 ASPM
  Enable PCI Express Active State Power Management settings
  0:Disabled, 2:L1
**/
  UINT8                       PcdPcieRootPort5Aspm;

/** Offset 0x0052 - PCIe Root Port 6 ASPM
  Enable PCI Express Active State Power Management settings
  0:Disabled, 2:L1
**/
  UINT8                       PcdPcieRootPort6Aspm;

/** Offset 0x0053 - PCIe Root Port 7 ASPM
  Enable PCI Express Active State Power Management settings
  0:Disabled, 2:L1
**/
  UINT8                       PcdPcieRootPort7Aspm;

/** Offset 0x0054
**/
  UINT8                       UnusedUpdSpace2[140];

/** Offset 0x00E0
**/
  UINT8                       ReservedSiliconInitUpd[16];
} FSPS_CONFIG;

/** Fsp S UPD Configuration
**/
typedef struct {

/** Offset 0x0000
**/
  FSP_UPD_HEADER              FspUpdHeader;

/** Offset 0x0020
**/
  FSPS_CONFIG                 FspsConfig;

/** Offset 0x00F0
**/
  UINT8                       UnusedUpdSpace3[14];

/** Offset 0x00FE
**/
  UINT16                      UpdTerminator;
} FSPS_UPD;

#pragma pack()

#endif
