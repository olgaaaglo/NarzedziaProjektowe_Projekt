FROM gcc:9.3.0
COPY . /
RUN g++ app.cpp -o app
EXPOSE 1337
CMD ["./app"]

