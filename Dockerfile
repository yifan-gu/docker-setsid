FROM busybox
ADD ./main /bin/main
CMD ["/bin/main"]
