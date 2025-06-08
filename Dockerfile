FROM ubuntu:22.04
RUN apt-get update && apt-get install -y build-essential cmake
WORKDIR /app/2048.cpp
COPY ./2048.cpp /app/2048.cpp
RUN mkdir build && cd build && cmake .. && cmake --build .
WORKDIR /app/2048.cpp/build
CMD ["./2048"]
