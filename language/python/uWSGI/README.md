# THE USE OF uWSGI

1. Installation of uWSGI

    sudo apt install uwsgi

2. support of python3

## test uWSGI

    [run test.py by using uWSGI](./test.py)

## use uWSGI to connect Django

1. cd project dir

        uswgi --http :9090 --module mysite.wsgi

2. access `http://127.0.0.1:9090/admin` in brower

## use nginx to connect uWSGI

1. modify `nginx.conf`

        location / {
           include uwsgi_params;
           uwsgi_pass 127.0.0.1:8090;
        }

    采用8090端口和uWSGI通信

2. touch the file of uWSGI that used to config and named `uswgi.ini`

        [uwsgi]
        print = uwsgi start
        uid = 1000
        gid = 1000
        plugins = python3
        socket = 127.0.0.1:8090
        chdir = /home/dx/桌面/Example/django/mysite
        module = mysite.wsgi
        no-orphans = true
        processes = 4
        thread = 2

3. run uWSGI Server

        uwsgi uwsgi.ini

4. access `http://127.0.0.1/admin` in brower

## the detail of configration of uWSGI

- socket 指提供客户端(这里指nginx)访问连接的地址，可以是UNIX套接字的路径也可以是TCP套接字的IP地址，最多可以指定8个套接字选项，可用`-S`缩写形式表示

        Example:
        1. --socket /tmp/uwsgi.socket
        2. -S 127.0.0.1:1717

        3. .ini
            [uwsgi]
            socket = 127.0.0.1:1717
            socket = 127.0.0.1:2626

- processes / workers 设置worker的数量，可以使用`-P`缩写形式

        Example:
        1. --processes 8 #将会派生8个worker进程
        2. --workers 4 #将会派生4个worker进程
        3. -P 8
        4.
            <uwsgi>
                <workers>3</workers>
            </uwsgi>

- harakiri 用于harakiri超时时间，每个请求的时间不得长于这个值，长于这个值就被丢弃，响应的worker将会被重新分配使用

        --harakiri -verbose # 开启harakiri的额外信息
