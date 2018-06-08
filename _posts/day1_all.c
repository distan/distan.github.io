常见的操作系统:
	unix  linux   os  ios android   windows   openWRT  FreeBSD 
操作系统的发展历史:
	1970: 计算机系统元年
	
打开终端:
	Ctrl  alt  t 
	Ctrl  +(shirft =)/- 放大/缩小
	
fs@ubuntu:~$ 

主人名@主机名:文件夹$
whoami 
hostname
pwd
$  普通用户的提示符
#  (超级用户的提示符,root)

图形化界面操作/终端操作
filesystem(此电脑,计算机,硬盘)  VS     cd   /   ;   ls  
点filesystem-->双击home-->双击fs 
cd   /;ls   --> cd  home;ls --> cd fs; ls 

ls:
	列出文件夹内容或文件属性
文件夹的进入和退出
	cd  切换文件夹
		cd  Downloads 
	./  当前目录
	../ 后退一层
	../../ 退两层
		cd   ../

文件夹/文件的创建与删除
	mkdir 
	touch 创建空文件,或更新文件时间
	cat   读文件内容,并显示
	echo  
		echo "hello  world"  向屏幕滴个文件写"hello world"
		echo "hello   kugou"  >  jielun 
		echo "xiaomingdetiankongcongbuxiayu" >　naying 
	>   输出重定向,即内容输出的指定目标文件,(先清空原文件)
	>>  输出追加,在原文件的基础上添加内容
	
	rm 删除文件
		rm   -r 
		
	man查看ls的用法 
		ls 				 [OPTION]... 		 	[FILE]...
		命令           选项/参数			    目标
		(命令本身)     (技能加强)			   (选中目标)
		
		OPTION: 选项参数, man手册有提示 
			以 -或--开始
			eg:
				ls  -l   -a 
				ls --all 
				
		FILE: 文件名
		[] 可选标志,可省略,
		... 多参机制
		
		ls  默认查看当前目录的内容
		ls  -a   查看当前目录所有文件(包括以点开头的文件,即隐藏文件)
		ls  -l   显示文件详细信息
		ls  -l -a、 ls -a -l、  ls -la、  ls -al 
		ls  -l   jielun  查看jielun滴个文件的详细信息
		ls  -l   jielun  naying 同时查看两个文件的详细信息.
	
	chmod 
		ls -l  jielun  显示jielun文件的详细信息
		-rw-rw-r-- 			1 	  fs    fs   18 	 May 28 16:22       jielun
		类型和权限位	 链接数  主人  战队  大小     时间  			文件名
		
		文件类型:
		- 普通文件:文本,代码,二进制 
		d 文件夹 
		c 字符设备文件,键盘
		b 块设备,  硬盘  
			主人的权限  队友权限   其他人权限
			rwx         rwx         rwx 	完整权限
		-	rw-			rw-		    r--  	字母权限
		    110         110         100      二进制权限
			 6           6           4       八进制权限
			
			
			---         ---         --- 
			000         000         000
			 0            0          0 
			 chmod   000     jielun 
			 
			rwx  rwx  rwx 
			111  111  111
			  7   7    7 
			 chmod  777  jielun 
			 
			
			 
											
PS:
	everything is file 一切皆文件
	.开头文件即隐藏文件
		ls  -a 显示所有文件
		ls  -l 显示文件详细信息 
补充:
	相对路径
		从当前位置去定位其他文件或文件夹的方式
		cd Bawang 
		cp    ./jielun      ./../Videos 
		cp    jielun          ../Videos
		
		cp    ./Bawang/jielun    ./Videos 
		cp     Bawang/jielun       Videos
			
	绝对路径
		从根目录出发去定位其他文件或文件夹的方式
		cp    /home/fs/Bawang/jielun       /home/fs/Videos  
		
拓展:
	man 查看cp命令,并使用
		cp    jielun    Jay   将jielun复制成Jay
		cp    /home/fs/Command/jielun   /home/fs/Command/naying    ../
		cp    jielun naying    ../ 将Command下的jielun和naying拷贝到上一层目录
	
等级任务0:
	在Bawang文件夹下创建文件夹day1
	用man手册查看cp命令,并将jielun文件拷贝到day1文件夹中 
	cp   SOURCE...    DIRECTORY
	
	
等级任务1：
    在bawang中下创建文件夹student1，student2。
	并在student1里创建文件peiqi　,qiaozhi和 文件夹test。
    删除test，qiaozhi
	将"hello    kuwo"重定向进入 文件peiqi中 ， 
	将peiqi的文件权限改为 仅所属用户 可读可写可执行。(即rwx --- ---)

等级任务2：
    将file1文件copy到Videos中。 
    将student2  文件重命名为   Camp
    将jielun文件移动到 /mnt/
################################################	
		
	
	
