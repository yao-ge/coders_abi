# 编译器和编译选项
CXX := g++
CXXFLAGS := -std=c++11 -Wall

# 源文件和目标文件
SRCS := $(wildcard *.cpp)
EXES := $(SRCS:.cpp=)

# 默认目标
all: $(EXES)

# 生成可执行文件
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# 清理生成的文件
clean:
	rm -f $(EXES)

# 预定义的伪目标，用于避免与同名文件冲突
.PHONY: all clean

