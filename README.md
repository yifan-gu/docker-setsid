docker-setsid
=============

Test setsid in a docker container.

```shell
$ make
```
In this container, we fork a child process and call setsid() in the process (which is equivalent to a daemon() call). We sleep a while in the parent process and then exit. The result shows that when the parent exits, the child process get killed too.
