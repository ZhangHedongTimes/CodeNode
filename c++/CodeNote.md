# CodeNode

[TOC]

### 表示无穷大

```c++
#define MINCHAR 0x80
#define MAXCHAR 0x7f
#define MINSHORT 0x8000
#define MAXSHORT 0x7fff
#define MINLONG 0x80000000
#define MAXLONG 0x7fffffff
#define MAXBYTE 0xff
#define MAXWORD 0xffff
#define MAXDWORD 0xffffffff
```

### 指针初始化

```c++
int* a=new int(10);//定义指针int 型指针a，并初始化指向 10
int* a=new int[10];//定义指针int 型指针a，并申请10个int型的内存
```

