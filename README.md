docker-setsid
=============

###Test setsid in a docker container

```shell
$ git clone https://github.com/yifan-gu/docker-setsid.git
$ cd docker-setsid
$ make
```

###Result

In this container, we fork a child process and call `setsid()` in the process (which is equivalent to a `daemon()` call). We sleep a while in the parent process and then exit. The result shows that when the parent exits, the child process get killed too.


###Conclusion

The root process in the docker container is the `init process` of the container.
