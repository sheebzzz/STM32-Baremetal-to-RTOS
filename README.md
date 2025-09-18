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

**Outcome:** Gain confidence in register-level programming and building drivers from scratch.

---

### **Phase 2 – Intro to FreeRTOS**
- Set up FreeRTOS on STM32 (SysTick scheduler).
- Create tasks for LED blink, UART communication, sensor polling.
- Use semaphores, queues, and mutexes for synchronization.
- Interrupt-driven task notifications (UART RX).  

**Outcome:** Understand the basics of FreeRTOS and how to move from single-threaded to multitasking applications.

---

### **Phase 3 – Advanced FreeRTOS**
- Periodic tasks with software timers.
- Event groups for coordination.
- Middleware integration (FATFS on SD card, LWIP networking).
- Performance measurement (latency, context switch).  

**Outcome:** Build production-style real-time applications with advanced RTOS concepts.

---

## 📂 Repository Structure
```text
STM32-Baremetal-to-RTOS/
├── Phase1_Baremetal/
│   ├── 01_Blink_LED/
│   ├── 02_GPIO_Driver/
│   ├── 03_UART_Driver/
│   ├── 04_Timer_Driver/
│   └── 05_I2C_SPI_Drivers/
│
├── Phase2_FreeRTOS/
│   ├── 01_Basic_Tasks/
│   ├── 02_Semaphores_Queues/
│   ├── 03_Mutexes/
│   └── 04_Interrupt_Notifications/
│
└── Phase3_Advanced_RTOS/
    ├── 01_Software_Timers/
    ├── 02_Event_Groups/
    ├── 03_FATFS_SDCard/
    ├── 04_LWIP_Networking/
    └── 05_Performance_Metrics/

## 🚀 Quick Start
Clone the repository and open any project in STM32CubeIDE or build with `make`:

```bash
git clone https://github.com/yourusername/STM32-Baremetal-to-RTOS.git
cd STM32-Baremetal-to-RTOS/Phase1_Baremetal/01_Blink_LED
make flash   # or open in STM32CubeIDE and run
## 🎯 Goal
To master **bare-metal driver development** and progress toward **real-time, multitasking applications** using FreeRTOS.

---

## 🛠️ Tools & Platforms
- STM32F4 / STM32F7 Discovery Boards
- STM32CubeIDE / GCC ARM Toolchain
- FreeRTOS Kernel
- Debugging: GDB, OpenOCD, STM32 ST-LINK Utility

---

## 📌 Future Work
- Add DMA-based drivers
- Integrate unit testing (Ceedling/Unity)
- Explore multicore STM32 platforms

