all:
	gcc -static main.c -o main
	docker build --rm=true --tag="yifan/test-setsid" .
	docker run -d yifan/test-setsid
	rm main
