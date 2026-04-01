# ESP32-S3 LED Blink

一个简单的ESP32-S3 LED闪烁示例项目。

## 功能

- 使用ESP32-S3开发板
- 点亮内置LED并让其闪烁
- 通过串口输出状态信息

## 硬件要求

- ESP32-S3开发板（如ESP32-S3-DevKitC-1）
- USB数据线

## 软件要求

- PlatformIO
- Arduino Framework for ESP32

## 编译和烧录

### 使用PlatformIO CLI

```bash
# 编译项目
pio run

# 编译并上传到开发板
pio run --target upload

# 监控串口输出
pio device monitor
```

### 使用VS Code

1. 安装PlatformIO扩展
2. 打开项目文件夹
3. 点击底部状态栏的"Build"按钮编译
4. 点击"Upload"按钮上传到开发板

## LED引脚

- 默认使用GPIO 2作为LED引脚
- 如果你的开发板使用其他引脚，请修改`src/main.cpp`中的`LED_PIN`定义

## 串口配置

- 波特率: 115200
- 数据位: 8
- 停止位: 1
- 校验位: None

## GitHub Actions

本项目配置了GitHub Actions自动构建：
- 每次推送代码时自动编译
- 生成二进制文件并上传为artifacts
- 可以下载编译好的固件

## 许可证

MIT License