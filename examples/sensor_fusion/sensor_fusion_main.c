/****************************************************************************
 * apps/examples/sensor_fusion/sensor_fusion_main.c
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <nuttx/sensors/sensor.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define REG_LOW_MASK 0xFF00
#define REG_HIGH_MASK 0x00FF
#define MPU6050_FS_SEL 32.8f
#define MPU6050_AFS_SEL 4096.0f

/****************************************************************************
 * Private Types
 ****************************************************************************/

struct mpu6050_imu_msg
{
  int16_t acc_x;
  int16_t acc_y;
  int16_t acc_z;
  int16_t temp;
  int16_t gyro_x;
  int16_t gyro_y;
  int16_t gyro_z;
};

/****************************************************************************
 * Public Functions
 ****************************************************************************/


/****************************************************************************
 * sensor_fusion_main
 ****************************************************************************/

int main(int argc, char *argv[])
{
 return 0;
}
