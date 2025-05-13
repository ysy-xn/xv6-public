# 读书实践周学习笔记
## 学习资料来源
- [Git官方文档](https://git-scm.com/doc)
- [GitHub教程](https://guides.github.com/)

## 实践流程
1. 安装Git并配置PyCharm。
2. 创建本地和远程仓库。
3. 编写并提交笔记。
4. 关注并下载操作系统实验课代码

## 遇到的困难及解决方法
- 1.Git推送失败。  
- 通过deepseek找出了问题所在，1是远程仓库origin已经存在但SSL证书验证失败，导致git push语句失败,2是git的命令使用错误
- 1采用让git使用windows的证书存储，在git bash上运行以下命令：
- git config --global http.sslBackend schannel
- git push -u origin master
- 2是注意到git add .这条命令add和.之间有空格，最终解决问题
- 2.老师账号搜索不到
- 慕课上自行下载了实验课代码并上传到了远程仓库xv6-public上

## 心得
Git版本控制非常实用，推荐书籍《Pro Git》。
