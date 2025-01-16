# ESP32 Weather EPD ��Ŀ��¼

## ��Ҫ�޸�
1. ���� WiFi ����
2. ��� WiFi IP ��ַ��ӡ����
3. ���Ե����ش���
4. ���� OpenWeather API key �������� 2.5 �汾
5. �޸� API �˵�Ϊ Current Weather API
6. ���� HTTPS_NO_CERT_VERIF
7. ��� BME280 ���ƿ���

## �����޸�

### 1. �޸� config.cpp
·����platformio/src/config.cpp
�޸����ݣ�
- ���� WiFi ����
- ���� OpenWeather API key Ϊ 0d73019f1c6e92fea4044eea7bdf1d45
- ���� API �˵�Ϊ api.openweathermap.org/data/2.5/weather
- ����ʱ��Ϊ CST-8
- ���õ���λ�� (31.2304, 121.4737)

### 2. �޸� config.h
·����platformio/include/config.h
�޸����ݣ�
- ���� HTTPS_NO_CERT_VERIF
- ��� BME280 ���ƿ���
- ����ʱ������

### 3. API ����ʾ��
- ʹ�ó������ƶ��Ǿ�γ��
- ʾ������
  https://api.openweathermap.org/data/2.5/weather?q=Shanghai&appid=0d73019f1c6e92fea4044eea7bdf1d45

## ��������������

### OpenWeather API 401 ����
1. ��� API key ��ʽ��
   - ȷ�� API key ������40 �ַ���
   - ע�ⲻҪ��©���ַ�
   - ʾ����0d73019f1c6e92fea4044eea7bdf1d45

2. ��� HTTPS ���ã�
   - ȷ������ HTTPS_NO_CERT_VERIF
   - �� config.h ��ȷ�ϣ�
     ```c
     #define USE_HTTPS_NO_CERT_VERIF 1
     ```

3. ��� API �˵㣺
   - ʹ�� 2.5 �汾 API
   - ȷ��ʹ����ȷ�Ķ˵㣺
     ```c
     const String OWM_ENDPOINT = "api.openweathermap.org";
     const String OWM_ONECALL_VERSION = "2.5";
     ```

4. ������������
   - ʹ�ó������ƶ��Ǿ�γ��
   - ȷ������������ȷ
   - ʾ�������ʽ��
     ```
     https://api.openweathermap.org/data/2.5/weather?q=Shanghai&appid=API_KEY
     ```

## �����ϴ�
1. ���� ESP32 �豸
2. ʹ�� USB ����������
3. �� platformio Ŀ¼��ִ�У�
```bash
cd platformio && pio run -t upload
