# ConnectRedisAPI
用C++语言，封装的API 用来连接redis数据库，进行数据存储与操作


# 连接数据库
首先要安装hiredis
wget https://github.com/redis/hiredis/archive/v0.14.0.tar.gz  <br>
make  <br>
make install <br>

库的路径 /usr/local/lib/libhiredis.so

g++ -lhiredis -o app main.cpp

./app
