//HOW TO WRITE A CLASS

#include <iostream>
#define LOG(x) std::cout << x << std::endl

class Log{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:
	int m_logLevel = LogLevelInfo;
public:
	void SetLevel(int level){
		m_logLevel = level;
	}

	void Error(const char* message){
		if (m_logLevel >= LogLevelError)
			std::cout << "[ERROR]:" << message << std::endl;
	}

	void Warn(const char* message){
		if (m_logLevel >= LogLevelWarning)
			std::cout << "[WARNING]:" << message << std::endl;
	}

	void Info(const char* message){
		if (m_logLevel >= LogLevelInfo)
			std::cout << "[INFO]:" << message << std::endl;
	}
};

int main(){

	Log logger;
	logger.SetLevel(logger.LogLevelWarning);
	logger.Warn("Hello!");

	std::cin.get();
}
