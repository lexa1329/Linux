
1 основные принципы Unix-way


    Ответ:(1) одна задача - одна программа
  
	(2) есть множество путей решения
  
	(3) все есть файл 

2 Линус Торвальдс является разработчиком чего

	Ответ: Ядра ОС Linux 

3 Как посмотреть  название ядра системы из консоли?

	Ответ:uname -r

4 Промежутки измерения загрузки системы для команды uptime следующие

	Ответ: 1, 5 и 15 минут.

5 какой командой узнать сколько занято на HDD

	Ответ:df -H

6 какие разделы содержит вывод команды vmstat

    Ответ:-procs (количество процессов)
	-memory (память)
	-swap
	-io (загрузка ввода-вывода)
	-cpu (загрузка процессора)

7 Описать работу своего Linux дистрибутива: какое ядро, архитектура, размеры hdd, объеме ОЗУ, загрузке процессора и т.д.

	Ядро, архитектура:
	uname -ar
	Linux alex-virtual-machine 5.8.0-36-generic #40~20.04.1-Ubuntu SMP Wed Jan 6 10:15:55 UTC 2021 x86_64 x86_64 x86_64 GNU/Linux

	Информация HDD:
	df -H
	Filesystem      Size  Used Avail Use% Mounted on
	udev            2,1G     0  2,1G   0% /dev
	tmpfs           410M  1,8M  408M   1% /run
	/dev/sda5        42G   11G   30G  26% /
	tmpfs           2,1G  108M  2,0G   6% /dev/shm
	tmpfs           5,3M  4,1k  5,3M   1% /run/lock
	tmpfs           2,1G     0  2,1G   0% /sys/fs/cgroup
	tmpfs           410M   50k  410M   1% /run/user/1000

	Информация ОЗУ:
	free -h
	              total        used        free      shared  buff/cache   available
	Mem:          3,8Gi       1,7Gi       400Mi       106Mi       1,8Gi       1,8Gi
	Swap:         1,8Gi        16Mi       1,8Gi


	Загрузка процессора:
	uptime

	12:31:45 up  7:21,  2 users,  load average: 0,18, 0,22, 0,18

  8. Установить Linux
![linux](https://i.imgur.com/YWxGWOm.jpg)

