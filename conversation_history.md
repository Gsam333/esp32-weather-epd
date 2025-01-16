# ESP32 Weather EPD 项目记录

## 主要修改
1. 更新 WiFi 配置
2. 添加 WiFi IP 地址打印功能
3. 忽略电池相关代码
4. 更新 OpenWeather API key 并降级到 2.5 版本
5. 修改 API 端点为 Current Weather API
6. 启用 HTTPS_NO_CERT_VERIF
7. 添加 BME280 控制开关

## 配置修改

### 1. 修改 config.cpp
路径：platformio/src/config.cpp
修改内容：
- 更新 WiFi 配置
- 更新 OpenWeather API key 为 0d73019f1c6e92fea4044eea7bdf1d45
- 更新 API 端点为 api.openweathermap.org/data/2.5/weather
- 设置时区为 CST-8
- 设置地理位置 (31.2304, 121.4737)

### 2. 修改 config.h
路径：platformio/include/config.h
修改内容：
- 启用 HTTPS_NO_CERT_VERIF
- 添加 BME280 控制开关
- 更新时区配置

### 3. API 请求示例
- 使用城市名称而非经纬度
- 示例请求：
  https://api.openweathermap.org/data/2.5/weather?q=Shanghai&appid=0d73019f1c6e92fea4044eea7bdf1d45

## 常见问题解决方案

### OpenWeather API 401 错误
1. 检查 API key 格式：
   - 确保 API key 完整（40 字符）
   - 注意不要遗漏首字符
   - 示例：0d73019f1c6e92fea4044eea7bdf1d45

2. 检查 HTTPS 配置：
   - 确保启用 HTTPS_NO_CERT_VERIF
   - 在 config.h 中确认：
     ```c
     #define USE_HTTPS_NO_CERT_VERIF 1
     ```

3. 检查 API 端点：
   - 使用 2.5 版本 API
   - 确保使用正确的端点：
     ```c
     const String OWM_ENDPOINT = "api.openweathermap.org";
     const String OWM_ONECALL_VERSION = "2.5";
     ```

4. 检查请求参数：
   - 使用城市名称而非经纬度
   - 确保城市名称正确
   - 示例请求格式：
     ```
     https://api.openweathermap.org/data/2.5/weather?q=Shanghai&appid=API_KEY
     ```

## 编译上传
1. 连接 ESP32 设备
2. 使用 USB 数据线连接
3. 在 platformio 目录下执行：
```bash
cd platformio && pio run -t upload
