# Zephyr 2-Day Workshop

This repository contains the materials, code, and resources for a hands-on 2-day Zephyr RTOS workshop.

## 🎯 Objective

Learn the fundamentals of embedded development using the [Zephyr RTOS](https://www.zephyrproject.org/). By the end of this workshop, participants will be able to:

- Set up and configure a Zephyr-based project
- Understand and modify DeviceTree and Kconfig
- Work with sensors via the Zephyr sensor subsystem
- Build applications with threads, workqueues, and logging
- Use the Zephyr shell interface for runtime interaction
- Develop BLE and USB-capable applications
- Combine features into a final wireless system project

## 📅 Schedule

### Day 1

| Time         | Topic                            |
|--------------|----------------------------------|
| 10:00–11:00  | Intro to Zephyr                  |
| 11:00–13:00  | Setup + Hello World + Debugging  |
| 13:00–14:00  | Lunch                            |
| 14:00–15:00  | DeviceTree + Kconfig             |
| 15:00–16:30  | Sensor Subsystem                 |
| 16:30–18:00  | Shell + Console + Logs           |

### Day 2

| Time         | Topic                            |
|--------------|----------------------------------|
| 10:00–11:00  | Threads + WorkQueues             |
| 11:00–12:30  | USB                              |
| 12:30–13:30  | Lunch                            |
| 13:30–15:00  | BLE                              |
| 15:00–18:00  | Final Workshop Project           |

## 🧩 Final Project

The final workshop challenge includes:

- Connecting a TMP102 sensor to an nRF52DK
- Sending temperature data over BLE to an nRF52840DK
- Printing sensor data periodically on the central
- Supporting shell access via USB RNDIS and Telnet

See the `/final_project/` folder for instructions and code template.

---

Happy hacking with Zephyr! 🚀
