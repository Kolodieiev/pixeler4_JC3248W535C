1. Встановити pip, якщо не встановлено.

2. Виконати команду у терміналі: 
pip install esptool

3. Підключити Лілку до ПК в режимі прошивки.

4. Виконати команду у терміналі:
python -m esptool --chip esp32s3 flash-id
та переконатися, що МК підключено і його пам'ять читається.

5. Виконати команду у терміналі:
python -m esptool --chip esp32s3 erase-flash 

6. Відкрити термінал у каталозі parts з файлами прошивки та виконати команду:
python -m esptool --chip esp32s3 --baud 460800 --before default-reset --after hard-reset write-flash -z 0x0 pixeler.bin

7. Дочекатися завантаження прошивки та автоматичного перезавантаження плати.
