RT-Thread/STM32F103ZE 0.3.0 Beta2
- 更新SD卡驱动到ST STM32 2.0.3固件库
- 添加RTC驱动，在finsh中添加list_device函数
- 添加hard fault处理函数（进入HardFault会显示出当前线程的PC和LR，及当前线程状况）
- 添加栈溢出检查
- LwIP添加以太网发送线程，优先级与以太网接收线程相同
- RT-DFS添加POSIX驱动接口
- 添加GoAhead WebServer
  * 需要RT-DFS文件系统支持
  * 默认文档根目录/web
  * 默认数据库目录/db（用于保存用户权限文件）
  * 减小内存占用量为原始GoAhead WebServer版本的一半左右。
  * 支持ASP，Embedded Java Script，不支持cgi-bin

- 修正STM32中任务切换可能会被中断打断的问题；
- 修正调度器开锁时中断未打开的问题；
- 修正LwIP时间准确转换到RT-Thread的问题；
- 修正LwIP小内存模式下分配MEMP_TCP_PCB数目的问题；
- 修正LwIP中lwip_select函数中定时器问题

默认指标包括：
- 线程优先级256优先
- DFS缓存4K byte
- GoAhead WebServer内存池20K byte
- OS Tick 10ms
- IP地址：192.168.1.30
- 可用RAM大约45K （在未使能外扩SRAM的情况下）

Bernard Xiong
http://www.rt-thread.org
