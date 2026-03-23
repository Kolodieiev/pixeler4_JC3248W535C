/**
 * @file sd_setup.h
 * @brief Файл налаштування карти пам'яті
 * @details
 */

#pragma once
#include <stdint.h>

#define SD_SPI_BUS HSPI  // Номер шини SPI

#define SD_PIN_CS 10  // Бібліотека карти пам'яті вимагає реальний пін, навіть у випадку, якщо CS приєдано до землі.
#define SD_PIN_MOSI 11
#define SD_PIN_SCLK 12
#define SD_PIN_MISO 13

#define SD_FREQUENCY 80000000  // Частота шини SPI.
#define SD_MOUNTPOINT "/sd"    // Точка монтування. Не рекомендуєтсья міняти.
#define SD_MAX_FILES 10        // Максимальна кількість одночасно відкритих файлів.
