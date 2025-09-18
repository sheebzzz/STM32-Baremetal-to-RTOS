# STM32-Baremetal-to-RTOS
🚀 “Learning journey from writing bare-metal drivers on STM32 to building multitasking applications using FreeRTOS. Covers low-level register programming, peripheral drivers, RTOS concepts, and hardware-software integration.”
# STM32-Baremetal-to-RTOS

This repository documents my learning path from **bare-metal driver development on STM32** to **real-time applications using FreeRTOS**.  
It demonstrates how to move from direct register programming to building structured, multitasking embedded systems.

---

## 🛠️ Phases

### **Phase 1 – Bare-Metal Foundations**
- Blink LED using registers only (no HAL/LL).
- GPIO driver (button + LED).
- UART driver (TX/RX characters).
- Timer driver (delay, PWM).
- I2C/SPI drivers (communicate with a sensor).

### **Phase 2 – Intro to FreeRTOS**
- Set up FreeRTOS on STM32 (SysTick scheduler).
- Create tasks for LED blink, UART communication, sensor polling.
- Use semaphores, queues, and mutexes for synchronization.
- Interrupt-driven task notifications (UART RX).

### **Phase 3 – Advanced FreeRTOS**
- Periodic tasks with software timers.
- Event groups for coordination.
- Middleware integration (FATFS on SD card, LWIP networking).
- Performance measurement (latency, context switch).

---

## 🎯 Goal
To master **bare-metal driver development** and progress toward **real-time, multitasking applications** using FreeRTOS.

## 🛠️ Tools & Platforms
- STM32F4 / STM32F7 Discovery Boards
- STM32CubeIDE / GCC ARM Toolchain
- FreeRTOS Kernel
- Debugging: GDB, OpenOCD, STM32 ST-LINK Utility

---
