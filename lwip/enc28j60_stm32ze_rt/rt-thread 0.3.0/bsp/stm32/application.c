/*
 * File      : app.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2006, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://openlab.rt-thread.com/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2009-01-05     Bernard      the first version
 */

/**
 * @addtogroup STM32
 */
/*@{*/

#include <rtthread.h>
#include <finsh.h>

#ifdef RT_USING_DFS
/* dfs init */
#include <dfs_init.h>
/* dfs filesystem:FAT filesystem init */
#include <dfs_fat.h>
/* dfs filesystem:EFS filesystem init */
#include <dfs_efs.h>
/* dfs Filesystem APIs */
#include <dfs_fs.h>
#endif

#ifdef RT_USING_LWIP
#include <lwip/sys.h>
#include <lwip/api.h>
#endif

#ifdef RT_USING_RTGUI
#include <rtgui/rtgui.h>
#endif

/* thread phase init */
void rt_init_thread_entry(void *parameter)
{
/* Filesystem Initialization */
#ifdef RT_USING_DFS
	{
		/* init the device filesystem */
		dfs_init();
		/* init the efsl filesystam*/
		efsl_init();

		/* mount sd card fat partition 1 as root directory */
		if (dfs_mount("sd0", "/", "efs", 0, 0) == 0)
			rt_kprintf("File System initialized!\n");
		else
			rt_kprintf("File System init failed!\n");
	}
#endif

/* LwIP Initialization */
#ifdef RT_USING_LWIP
	{
		extern void lwip_sys_init(void);
		
		/* init lwip system */
		lwip_sys_init();
		rt_kprintf("TCP/IP initialized!\n");

#ifdef RT_USING_WEBSERVER
		{
			extern void thread_webserver(void *parameter);
			rt_thread_t webserver;
			
			webserver = rt_thread_create("twebsrv",
									thread_webserver, RT_NULL,
									4096, 140, 20); 
			rt_thread_startup(webserver);
		}
#endif
	}
#endif
}

int rt_application_init()
{
	rt_thread_t init_thread;

	init_thread = rt_thread_create("init",
								rt_init_thread_entry, RT_NULL,
								2048, 80, 20);
	rt_thread_startup(init_thread);

	return 0;
}

/*@}*/
