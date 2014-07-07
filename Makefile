all:
	gcc -static main.c -o main
	docker build --rm=true --tag="test-setsid" .
	docker run -d test-setsid
