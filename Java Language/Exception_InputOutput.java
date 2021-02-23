package JavaStudy;

public class Exception_InputOutput {
	public static void main(String[] args) {
		/*
		[예외의 개념과 처리]
		- 예외: 프로그램 실행 중 발생하는 예기치 않은 사건.
		- 자바에서는 예외도 모두 객체로 처리.
		- JVM이 묵시적으로 예외처리를 수행하며, 예외처리구문이 있다면 예외처리구문이 예외를 처리하도록 한다.
		- 모든 예외관련 클래스는 java.lang.Throwable에서 제공.
		- Error, Exception이 있으며, Error는 하드웨어 관련 예외를 처리하며, 
		Exception에서 RuntimeException과 Error는 JVM에서 처리
		나머지는 프로그램에서 처리 권장.
		- 처리 효율보다는 처리에 드는 노력이 많이들어 JVM보고 처리하라고 하는 것.

		- try(예외발생가능성구문) - catch(해당예외처리구문) - finally(선택적)
		- throws를 사용해 호출한 메소드에 예외를 처리하라고 넘겨주는 방법도 있다.

		[문자 스트림]
		- 자바는 스트림으로 입출력을 하고, 스트림이란 순서가 있는 데이터의 흐름을 말한다.
		- java.io에서 스트림 처리 방법을 제공.
		- Character Stream: 16비트의 문자나 문자열을 읽고 쓰기 위한 스트림.
		- Byte Stream: 8비트의 바이트를 읽고 쓰기 위한 스트림.
		- FileWriter(Writer 상속), FileReader(Reader 상속)

		[바이트 스트림]
		- 파일을 2진데이터로 처리할 수 있다.
		- FileOutputStream(OutputStream 상속), FileInputStream(InputStream 상속)
		- DataOutputStream: 자바 기본 자료형 쓰기. DataInputStream: 자바 기본 자료형 읽기.
		- ObjectOutputStream: 객체를 파일에 씀 ObjectInputStream: 객체에 저장함.
  		객체를 입출력할 때 직렬화(Serialization)된 데이터를 사용하고, 
  		직렬화된 데이터를 표현함으로써, 객체의 영속성(Object Persistence)을 보장. 
  		여기서 영속성이란 객체가 자신의 상태를 기록해두어 다음에 다시 재생될 수 있는 능력을 말함.
  		객체가 직렬화된 데이터를 사용하기 위해서는 객체를 생성하는 클래스가 Serializable 인터페이스를 
  		포함해야 함.
		 */

	}
}
