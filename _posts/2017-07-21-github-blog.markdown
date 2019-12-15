---
layout:     post
title:      "Github 个人博客建立教程"
subtitle:   ""
date:       2017-07-21 17:29:00
author:     "Shepherd"
header-img: "img/in-post/post-github-blog/post-blog-00.jpg"
header-mask: 0.3
tags:
    - Github
    - Blog
---



1、先在GitHub上注册一个账号，然后按图中所示，建立一个仓库。

![](/img/in-post/post-github-blog/post-blog-01.jpg)


2、按照提示填写相关内容，由于我们已经建立过仓库，所以提示有重名，新建立的用户不会有这个提示。
![](/img/in-post/post-github-blog/post-blog-02.jpg)


3、进入仓库之后上面会有一行菜单栏，选择Setting（设置）选项
![](/img/in-post/post-github-blog/post-blog-03.jpg)


4、下拉到GitHub Pages项中，这里有两个地方需要设置，一个是Source里面的选项，实际上就是一个选择分支的设置，这里有一个问题，就是下拉栏是灰色的，无法选择，不过博主遇到这个问题时，Source的默认选择是master分支，如果不是的话就调成master分支即可；另一个设置就是choose theme，点进去之后随便选择一个自己喜欢的主题即可。
![](/img/in-post/post-github-blog/post-blog-04.jpg)

设置好之后会发现多了一个文件，相当于是仓库默认首页index.html，之后我们把这个文件删了也没有影响，这一步主要是和github没更新以前的gh-pages分支的作用相同。
![](/img/in-post/post-github-blog/post-blog-05.jpg)

至此GitHub端的设置就算基本完成了，接下来是本地的设置，为了方便个人博客的维护和更新。

---
5、在本地新建一个文件夹
![](/img/in-post/post-github-blog/post-blog-06.jpg)

接下来需要下载Github Desktop的客户端，据说官网的现在需要翻墙下载，这里提供网盘地址
链接: http://pan.baidu.com/s/1qY9Gffu  密码: m9yk
下载安装即可，还是比较简单的。


6、安装好之后登陆，随后在左侧空白处点右键进入命令行。
![](/img/in-post/post-github-blog/post-blog-07.jpg)


7、在客户端中把云端的仓库克隆到本地新建的文件夹里来，这里就不一步一步具体指导了。
![](/img/in-post/post-github-blog/post-blog-08.jpg)
克隆完成之后去文件夹里看一看有没有多出文件来就好了，然后小伙伴们就可以把网上下载的模板或者自己写的博客文件放在里面就好了。

此后博客的创建和更新就直接在这个文件夹里进行改动就好了，记得每次改动完之后要进命令行上传云端。

---
接下来是上传的步骤
8.打开GitHub客户端，在相应仓库上右键点击，打开命令行，一般来说路径应该是自动切换到本地仓库根目录下，如果没有切换，就手动用cd命令切换一下。

git add . (有一个点，如果涉及到文件的上传和删除可以把命令改为  git add --all)

git commit -m 'distan.github.io'  (单引号里是你GitHub云端仓库的名字)

git pull origin master (注意是master分支，不是以前的gh-pages分支)

git push origin master


一切完成之后就可以上云端去查看文件是否上传成功，然后再次进入云端的Setting界面，还是之前GitHub Pages的项，会给出你的博客地址，记住没有问题的时候应该是绿色的小勾，这样就可以点进去看你的博客啦。
![](/img/in-post/post-github-blog/post-blog-09.jpg)