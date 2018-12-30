#           用C语言实现字符动画
## 萌新的说，有不足还请多多指教。<br/>
### 总体的思路
<br/>一：选取一段视频，使用PotPlayer（或自己写一个类似功能的）把这段视频截图，每一帧截取一次。<br/>
<br/>二：把截取到的图片用Python转换成ASCII，并保存成一个txt。python大佬链接：https://github.com/Whale3070/ctf-coding<br/>
<br/>三：用C语言逐个读入刚才转换的txt，并在控制台输出。<br/>
<br/>注：在输出txt的时候要注意时间控制，不然太快了一下就播没了23333，如果用clock()函数控制时间的话比较麻烦但是精确，也可以用sleep函数比较方便~<br/>
<br/>代码在上面喽，请多多指教~
<br/>例是用轻音少女的op~<br/>据说bad apple会更好看？~
<br/>![tu](http://wx2.sinaimg.cn/large/005TGG6vly1fjev57vlv6j306q06q74d.jpg)
